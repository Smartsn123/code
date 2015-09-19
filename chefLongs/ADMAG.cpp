#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)

ll fibo[1000];
ll size;
void make()
{
  ll maxv=pow(1000,6);
 // cout<<maxv<<endl;
  fibo[1]=1;
  fibo[2]=2;
  fibo[3]=3;
  size=4;
  ll prev=3;
  while(prev<=maxv)
   {
      fibo[size]=fibo[size-1]+fibo[size-2];
      prev=fibo[size];
      size++;
   }

}


int main()
{fastinput;
  
  make();
  //cout<<size<<endl;
  int t;
  cin>>t;
  while(t--)
  {
    ll n,ans=0;
    cin>>n;
    loop(i,1,size)
      { if(fibo[i]>n) 
         {ans=i-1; break;}
      }
     
    cout<<ans<<endl;    
    
  }
  return 0;
}
