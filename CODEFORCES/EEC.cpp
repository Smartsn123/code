
#include<bits/stdc++.h>
using namespace std;
int n,m,t;
pair<int, pair<int, int> > extendedEuclid(int a, int b)
 {
    int x = 1, y = 0;
    int xLast = 0, yLast = 1;
    int q, r, m, n;
    while(a != 0) {
        q = b / a;
        r = b % a;
        m = xLast - q * x;
        n = yLast - q * y;
        xLast = x, yLast = y;
        x = m, y = n;
        b = a, a = r;
    }
    return make_pair(b, make_pair(xLast, yLast));
}

 
int modInverse(int a, int m) 
{
    return (extendedEuclid(a,m).second.first + m) % m;
}




int main()
{   
  
   cout<<"Enter no of test cases :"<<endl; 
   cin>>t;
    while(t--)
    { 
        
       cout<<"Enter no of test cases  n and mod:"<<endl; 
        cin>>n>>m;
       cout<<modInverse(n,m)<<endl;
       
    }
 
  
  return 0;    
   
}
