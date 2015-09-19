#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000005
ll arr[MAXL];
ll sz=0;

bool search(ll val)
{
  bool f=0;
  loop(i,0,sz)
  { if(arr[i]==val)
    { f=1;break;}
  }
  return f;
   
}
map<ll,ll> mymap;
map<ll,ll> :: iterator it;
void make()
{
  sz=1;
  ll lmt=pow(2,31);
  arr[0]=1;
  while(arr[sz-1]<=lmt)
  {
     arr[sz]=arr[sz-1]+pow(2,sz);
     sz++;
  }
}
int main()
{ fastinput;
  int t;
  make();
 
  cin>>t;
  while(t--)
  {
   

      ll n;
       cin>>n;
    if(n==1)
      cout<<2<<endl;
    else if(search(n))
      cout<<n/2<<endl;
    else
      cout<<"-1"<<endl;    
        
    
  }
  return 0;
}

9XRujIiS

