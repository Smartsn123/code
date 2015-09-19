#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define in(a)  cin>>a
#define out(a) cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 2003

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

ll modInverse(ll a, ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        return 0;
    else
    {
        // m is added to handle negative x
        ll res = (x%m + m) % m;
           return res;
    }
}


ll powf(ll a,ll b)
{
   if(b==0)
    return 1;
   ll ans=1;
   ans=powf(a,b/2);
   ans=(ans*ans)%mod;
   if(b%2)
   ans=(ans*a)%mod;
   return ans;   
}


void compute(ll n, ll k, ll l ,ll &P,ll &D)
{  
  P=1;  D=1;
  ll ct=l;
  for(ll i=n;i>(n-l);i--)
  { 
    if(ct>0)
     { P*=i;
       P%=mod;
       D*=k;
       D%=mod;
       ll g=gcd(P,D);
       P/=g;
       D/=g; 
       ct--;
      // cout<<P<<" "<<ct<<" "<<D<<endl;
      }
    else
      P*=i;
      P%mod ;  
  }
  
   // cout<<P<<"/"<<D<<endl;
  ll  g=gcd(P,D);
    P/=g; 
    D/g;
  
   D*=powf(k,ct);
   D%mod;
    g=gcd(P,D);
    P/=g; 
    D/g;
    
   
   
  // cout<<P<<"/"<<D<<endl;
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {  ll n,k,l,f,P,Q;
     cin>>n>>k>>l>>f;
   if(n>=l)
    {    compute(n,k,l,P,Q);
         //cout<<Q<<endl;
        /* ll cl=gcd(l+1,P);
         P/=cl;
         Q*=((l+1)/cl);
        */
        // cout<<P<<"/"<<Q<<endl;
         ll a;
      
         a= modInverse(Q,2003);
         cout<<(P*a)%mod<<endl;
    }
   else
     cout<<"0"<<endl;
     
    
  }
  return 0;
}


