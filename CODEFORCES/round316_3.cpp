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
ll val[MAXL];
ll lazy[MAXL];
ll l[MAXL];
ll r[MAXL];
ll n;





int main()
{ fastinput;
  ll n,q;
  
  scanf("%lld %lld",&n,&q);
  char inp[300002];
  scanf(" ");
  gets(inp);
  cout<<inp<<endl;
  ll x,ans=0;
  char c;
  loop(i,0,n-1)
   { //cout<<inp[i]; 
     if(inp[i]=='.' && inp[i+1]=='.')
       ans++;
   }
   br;
  cout<<ans<<endl;
  loop(i,0,q)
   { cin>>x>>c;
     x--;
     if(c!='.' && inp[x]=='.' && x>0 && inp[x-1]=='.' )
      ans--;
     if(c!='.' && inp[x]=='.' && x<(n-1) && inp[x+1]=='.' )
      ans--; 
      
    if(c=='.' && inp[x]!='.' && x<(n-1) & inp[x+1]=='.')
       ans++;
    if(c=='.' && inp[x]!='.' &&  x>0 && inp[x-1]=='.')
       ans++;

    cout<<ans<<endl;
   }
  
 // cout<<inp;
   return 0;
}
