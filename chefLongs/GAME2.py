from fractions import gcd
def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)

def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        return 0
    else:
        return x % m


   

t=input()
while(t):
      t=t-1
      n,k,l,f=[int(x) for x in raw_input().split()]
      ans=0
      if n>=l:
       res=1
       for i in range(n-l+2,n+2):
        res=res*(i)
       y=k**l
       y=y*(l+1)
       h=gcd(y,res)
       res=res/h
       y=y/h
       #print res,y
       y=modinv(y,2003)
       ans=res*y

      print ans

