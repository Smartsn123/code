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

ll xi[MAXL];
ll maxi[MAXL];
ll mini[MAXL],n;
int main()
{ fastinput;
  
  cin>>n;
  arrin(xi,n);

  loop(i,0,n)
  {  if(i==0)
     {mini[i]=(xi[i+1]-xi[i]);
      maxi[i]=(xi[n-1]-xi[i]);
     }
     else if(i==n-1)
     {mini[i]=(xi[i]-xi[i-1]);
      maxi[i]=(xi[i]-xi[0]);
     }
     else
     { mini[i]=min((xi[i]-xi[i-1]),(xi[i+1]-xi[i]));
       maxi[i]=max((xi[i]-xi[0]),(xi[n-1]-xi[i]));
     }
  }

 loop(i,0,n)
   cout<<mini[i]<<" "<<maxi[i]<<endl;
 return 0;
   
}
