#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 1000006


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll gcd(ll a , ll b)
{
   if(b==0)
    return a;
   else
    return gcd(b,a%b);
}

ll n,m,t;
int main()
{
  in(t);
  while(t--)
  {
    cin>>n>>m;
    cout<<abs(n-m)/gcd(max(abs(n),abs(m)),min(abs(n),abs(m)))<<endl; 
    
  }
  return 0;
}

