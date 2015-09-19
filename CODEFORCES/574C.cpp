
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
ll a[MAXL];
ll res[MAXL];
ll n;


ll gcd(ll a, ll b)
{
  if (b == 0) return a;
  return gcd(b, a%b);
}


bool isprob(ll num)
{
   while(num%3==0)
    num=num/3;
   while(num%2==0)
    num=num/2;
  //cout<<num<<" ";
  if(num==1)
   return 0;
  else
   return 1;
}

int main()
{ fastinput;
  
  cin>>n;
  arrin(a,n);
  bool f=0;
  
  //cout<<LCM<<endl;
  ll ans=a[0];
   
  loop(i,0,n)
    ans=gcd(a[i],ans);

  loop(i,0,n)
   {  ll num=a[i]/ans;
      if(isprob(num))
       {f=1;break;}
   }
   
  //cout<<ans<<endl;
   //br;
   if(f)
   cout<<"No"<<endl;
   else
   cout<<"Yes"<<endl;
  return 0;    
   
}
