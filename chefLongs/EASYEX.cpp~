#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define LT 1000005
#define LTN 100000001

bool isprime[LTN];
ll primes[LT];
ll size;


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



void seive()
{
    //cout<<"lll"<<endl;
  
   //cout<<"lll"<<endl;
   for(ll i=2;i<10001;)
   {  
      for(ll j=i;(i*j)<LTN;j++)
        isprime[j*i]=1;
 
      i++;
 
      while(i<=10001 && isprime[i]==1 )
      i++;
      if(i>=10001)
       break;
   }
   cout<<"here\n"<<endl;
   loop(i,2,LTN)
   {
      if(isprime[i]==0)
         primes[size++]=i;
   }
}
 
ll findpow(ll &a,ll b,int &flag)
{
  ll c=0;
  while(a%b==0 && a>=b)
    {  flag=1;
       c++;
       a=a/b;
     }
   return c; 
}
 
 
void countprimes(ll N,ll l , ll *c,ll & hldr)
{
   loop(i,0,l)
   {
       
         ll j=0;ll num=N-i;
         int flag=0;
         while(num>=primes[j])
          {  c[j]+=findpow(num,primes[j],flag);//no of times a prime appears due to no i is :
             j++;                                // (no. of times i appears X no. of times p appears in prime factoziation of i  
          }
         if(flag==0)
         hldr*=num;
        
       
   }
}
 
int main()
{
  fastinput;
  seive();
  ll t;
  cin>>t;
  while(t--)
  { 
     ll n,k,l,f,ans;
     cin>>n>>k>>l>>f;
   if(l<=n){
     ll countpN[size+2];
     ll countpD[size+2];
     loop(i,0,size+1)
       {countpN[i]=0;
        countpD[i]=0;
       }
     ll Den=1;
     ll Num=1;
     countprimes(n,l,countpN,Num);
     countprimes(k,1,countpD,Den);
 
     loop(i,0,size+1)
        countpD[i]*=l;
       
     loop(i,0,size+1)
       {
         ll mini =min(countpN[i],countpD[i]);
         countpN[i]-=mini;
         countpD[i]-=mini;
       }   
     
 
     loop(i,0,size+1)
       { Num*=pow(primes[i],countpN[i]);
         Den*=pow(primes[i],countpD[i]);
       }
   
    // cout<<"here"<<endl;
     Den=modInverse(Den,2003);
     ans= Num*Den;
 
    //cout<<Num<<"/"<<Den<<endl;
    }
     
    else
      ans=0;
 
    cout<<ans<<endl;       
  }
  return 0;
} 
