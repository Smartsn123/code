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


ll a,b,c;
 map<ll,ll> mymap;
 map<ll,ll>:: iterator it;

ll powr(ll a, ll b)
{
  if(b==0)
  return 1;
  
  ll ans=powr(a,b/2);
  ans*=ans;
  if(b%2)
   ans*=a;
  
  return ans;
}

ll sumdigits(ll num)
{
   ll div=10,sums=0;
   while(num>=1)
   {
       sums+=(num%10);
       num/=10;
   }

  return sums;
   
}


int main()
{
   //cout<<sumdigits(10001)<<endl;
   cin>>a>>b>>c;
   ll sx;
  
   ll lmt=powr(10,9)+1;
   loop(sx,1,82)
   {
      ll rhs=powr(sx,a)*b;
      rhs+=c;
      
      if(rhs>0 && rhs<lmt && sx==sumdigits(rhs))
           mymap[rhs]+=1;
       
     
   }
  
  cout<<mymap.size()<<endl;

  mapiter(mymap,it)
   cout<<(it->first)<<" " ;
  
  cout<<endl;
   
  return 0;
}
