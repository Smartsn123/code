#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)

vector<vector<ll> > adj;
ll n,m,x,y;

int main()
{ 
  
   in(n); in(m);
   adj.resize(n+1);
   
   loop(i,0,m)
   {
      in(x);in(y);
      adj[x].push_back(y);
      adj[y].push_back(x);  
   }


   
 
}

