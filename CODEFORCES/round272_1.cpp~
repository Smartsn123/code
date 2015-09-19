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
#define MAXL 1000006

ll x,y,n,k,m;
int main()
{ fastinput;
   bool f=0;
  cin>>n>>m;
  ll mini=INT_MAX;
  loop(i,0,(n/2)+1)
   { if((n-i)%m==0)
      { x=i;  y=n-2*x;
       // cout<<x<<" "<<y<<endl;
         mini=min(mini,x+y);
         f=1;
     }
   }

 

 if(f)
 cout<<(x+y)<<endl;
 else
  cout<<"-1"<<endl;
  return 0;
   
}
