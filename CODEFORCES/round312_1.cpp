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
ll l[1000006];
ll r[1000006];
ll arr[1000006];

ll n;
ll lt[1000006],rt[1000006];

int main()
{
   in(n);
   ll lc=0,rc=0,x,v;
   map<ll,ll> mapl;
   map<ll,ll> mapr;
   map<ll,ll>::iterator itl;
   map<ll,ll>::iterator itr;
   
  loop(i,0,n)
   {  cin>>x>>v;
      if(x>0)
       mapr[x]=v;
      else
       mapl[-x]=v;

   }

   for(itl=mapl.begin();itl!=mapl.end();itl++)
   {
      if(lc==0)
       lt[lc]=itl->second;
      else
       lt[lc]=lt[lc-1]+itl->second;
       lc++;
   }
 
  for(itr=mapr.begin();itr!=mapr.end();itr++)
   {
      if(rc==0)
       rt[rc]=itr->second;
      else
       rt[rc]=rt[rc-1]+itr->second;
       rc++;
   }
  
   ll ans=0;
   if(lc==rc)
    ans=rt[lc-1]+lt[rc-1];
   else if(lc>rc)
    ans=rt[rc-1]+lt[rc];  
  else if(lc<rc)
    ans=rt[lc]+lt[lc-1];  

 cout<<ans<<endl;
      
  return 0;  
   
   
}
