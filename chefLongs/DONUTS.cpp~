#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) scnum(arrname[i])
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 1000006
void scnum(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
ll arr[MAXL];
int main()
{ ll t;
  scnum(t);
  while(t--)
  {
    ll n,m,cto=0,ctno=0,stps=0;
    scnum(n);scnum(m);
    arrin(arr,m);
 
    ll sum=0,cuts=0;
    sort(arr,arr+m);

   
    sum=arr[m-1];
     ll ptr=0,pl=m-1;
    while(pl>ptr)
     {    
          sum+=arr[pl-1]+1;
          cuts++;
           arr[ptr]--;
          if(sum==n )
           break;
          if(arr[ptr]==0)
             ptr++;
          pl--;
          
     }  
    
   
    cout<<cuts<<endl;
  }
  return 0;
}
 
