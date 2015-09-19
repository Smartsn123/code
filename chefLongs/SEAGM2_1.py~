import sys
import math
def karatsuba(x,y):

  x=str(x)
  y=str(y)

  len_x=len(x)
  len_y=len(y)

  if(int(len_x)==1 or int(len_y)==1):    
    return int(x)*int(y)
  else:

    B=10
    exp1=int(math.ceil(len_x/2.0))
    exp2=int(math.ceil(len_y/2.0))
    if(exp1<exp2):
      exp=exp1
    else:
      exp=exp2
    m1=len_x-exp
    m2=len_y-exp
    a=karatsuba(int(x[0:m1]),int(y[0:m2]))
    c=karatsuba(int(x[m1:len_x]),int(y[m2:len_y]))
    b=karatsuba(int(x[0:m1])+int(x[m1:len_x]),int(y[0:m2])+int(y[m2:len_y]))-a-c
    results=a*math.pow(10,2*exp) + b*math.pow(10,exp) + c
    return int(results)

inpf = sys.stdin.readlines()
size=len(inpf)
f=0
t=inpf[f]
f=f+1
while (t and f<size):
    t=t-1
    n,m=[int(x) for x in inpf[f].split()]
    f=f+1
    Matrix = [[int('0') for x in range(m)] for x in range(m)] 
    for i in range(n):
       Matrix[i]=[int(float(x)*10000) for x in inpf[f].split()]
       f=f+1
       
    ProdR=[int(1) for x in range(n)]
 
    for i in range(n):
          for j in range(m):
               ProdR[i]=karatsuba(ProdR[i],Matrix[i][j])
             
 
    sums=float('1.0')
    ans=float('0')
 
    if ProdR[0]!=0:
       for i in range(1,n):
           sums=sums+(ProdR[i]/ProdR[0])
       ans=1/sums
    
    print ans



