from numpy import kron as kronecker_symbol
from sage.rings.integer_ring import IntegerRing
ZZ = IntegerRing()
from numpy import matrix, bmat as block_matrix
from numpy import is_prime

def is_even(num):
    return !(num & 0x1)

def H1(i,j,p):
    if i==0:
        return 1
    if j==0:
        return -1
    if i==j:
        return 1
    return kronecker_symbol(i-j,p)


def H2(i,j,p):
    if i==0 and j==0:
        return 0
    if i==0 or j==0:
        return 1
    if j==0:
        return -1
    if i==j:
        return 0
    return kronecker_symbol(i-j,p)

def hadamard_matrix_paleyI(n):
    if is_prime(n-1) and (n-1)%4==3:
        p = n-1
    else:
        raise ValueError, "The order %s is not covered by the Paley type I construction."%n
    return matrix(ZZ,[[H1(i,j,p) for i in range(n)] for j in range(n)])


def hadamard_matrix_paleyII(n):
    N = ZZ(n/2)
    if is_prime(N-1) and (N-1)%4==1:
        p = N-1
    else:
        raise ValueError, "The order %s is not covered by the Paley type II construction."%n
    S = matrix(ZZ,[[H2(i,j,p) for i in range(N)] for j in range(N)])
    return block_matrix([[S+1,S-1],[S-1,-S-1]])

def hadamard_matrix(n):
    if not(n%4==0) and not(n==2):
        raise ValueError, "The Hadamard matrix of order %s does not exist"%n
    if n==2:
        return matrix([[1,1],[1,-1]])
    if is_even(n):
        N = ZZ(n/2)
    elif n==1:
        return matrix([1])
    if is_prime(N-1) and (N-1)%4==1:
        return hadamard_matrix_paleyII(n)
    elif n==4 or n%8==0:
        had = hadamard_matrix(ZZ(n/2))
        chad1 = matrix([list(r)+list(r) for r in had.rows()])
        mhad = (-1)*had
        R = len(had.rows())
        chad2 = matrix([list(had.rows()[i])+list(mhad.rows()[i]) for i in range(R)]) 
        return chad1.stack(chad2)
    elif is_prime(N-1) and (N-1)%4==3:
        return hadamard_matrix_paleyI(n)
    else: 
        raise ValueError, "The Hadamard matrix of order %s is not yet implemented."%n

from scipy import linalg
def is_power2(num):
    return num != 0 and ((num & (num - 1)) == 0)
keys=[12,20,24,28,36,40,44,48,52,56,60,68,72,76,80,84,88,92,96,100]
t=int(raw_input())
for i in range(t):
     n=int(raw_input()) 
     if(is_power2(n)):
        print "YES"
        mat=linalg.hadamard(n)
        #print mat
        for j in range(n):
            for k in range(n):
                print mat[j][k],
        print ""
     elif(n in keys):
        print "YES"
        mat=hadamard_matrix(n)
        #print mat
        for j in range(n):
            for k in range(n):
                print mat[j][k]
     else:
       print "NO"
