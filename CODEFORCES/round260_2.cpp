 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 100005


ll ql[1000006];

ll n,ind,v;

ll powf(ll a, ll b)
{ if(b==0)
  return 1;
  ll ans=pow(a,b/2);
  ans=(ans*ans)%5;
  if(b%2)
  ans=(ans*a)%5;

  return ans;
}


int main()
{
  string s;
  cin>>s;
  v=int(s[s.length()-1]-'0');
  if(s.length()>1)
  v=int(s[s.length()-2]-'0')*10+v;
 // cout<<v<<endl;

  int ans=0;
  if(v%4==0)
   ans=4;
  else if(v<5)
  {
     int rm=v%4;
     ans=1+pow(2,rm)+pow(23,rm)+pow(4,rm);
     ans%=5;
  }
 
  cout<<ans<<endl;
  return 0; 
}
