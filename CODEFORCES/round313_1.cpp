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
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 10000001

ll arr[10000002];
ll f[10000002];
ll isprime[10000002];
ll primes[10000002];
ll size;
ll n;


void seive()
{
   loop(i,2,MAXL)
    isprime[i]=1;

   for(ll i=2;i<MAXL; )
   {
       primes[size++]=i;
      for(ll j=i;j*i<MAXL;j++)
        isprime[j*i]=0;
      i++;
      while(isprime[i]==0 && i<MAXL)
        i++;
      if(i>=MAXl)
       break;
   }


}

int main()
{  
   in(n);
   arrin(arr,n);
   sort(arr,arr+n);
   ll sum[1003];
   for(i,0,1000001)
   {
      for(i,0,n)
       {
       }
   }
}
