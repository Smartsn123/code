//Written by Sunny Singh IPG_2012086 ABV-IIITM Gwalior 
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
ll dol[MAXL];
ll retcents[MAXL];
ll arr[MAXL],n,k,x,y;

int main()
{ fastinput;
  cin>>n>>k;

  loop(i,0,n)
  {cin>>x>>y;   retcents[i]=( y==0 ? 0 :100-y);
    if(x>k ||(x==k && y>0) )
      retcents[i]=-1;
  }
  
   
  sort(retcents,retcents+n);

  cout<<retcents[n-1]<<endl;
   
  return 0;
}
