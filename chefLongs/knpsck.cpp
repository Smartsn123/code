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
ll K[2][10001];
ll arr[10001];
ll val[10001];
ll n,m;


int main()
{
  cin>>n>>m;
  
  
  if(m>(n*(n+1))/2)
   cout<<"-1"<<endl;
  else
   {
       ll dist=m-n;
       ll a=n-1,sum=0;
       ll ind=2;
       while(sum<dist)
         {sum+=a; a--;ind++;}
       cout<<ind-1<<endl;
       
   }
 

  return 0;
}

