#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) (a>b?a:b) 
#define min(a,b) (a<b?a:b) 
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define mod 1000000007
#define MAXL 1000006


int main()
{
  fastinput;

  ll n,a,b,da=0,db=0,mina=pow(10,10),min_da=0,min_db=0,x,y;
  cin>>n>>a>>b;
  bool f=0;
  
  x=a; y=b;
  if(6*n > a*b )
   {  //cout<<"here"<<endl;

      if(a > b)
      { f=1;
        ll tmp=a;
        a=b;
        b=tmp;
      }
       loop(i,1,sqrt(6*n))
         {    
              ll j=(6*n) /i;
               if(i*j< 6*n)
                j++;
              if(i>=a && j>=b && i*j>= 6*n && mina > i*j)
               { mina=i*j;
                 x=i;
                 y=j;
               }
               
         }
   }

  if(f)
  {
    ll tmp=x;
    x=y;
    y=tmp;
  }
  cout<<x*y<<endl;
  cout<<x<<" "<<y<<endl;
  return 0;
}
