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
#define MAXL 1000006
ll arr[MAXL];
ll temp[MAXL];
ll l[MAXL],r[MAXL];
ll n,m,w;


int main()
{
   cin>>n>>m>>w;
   map<ll,ll> l;
   map<ll,ll>:: iterator itl;
   map<ll,ll> r;
   map<ll,ll>:: iterator itr;

    ll maxm=-1,val;
   loop(i,0,n)
   {
     cin>>val;
    if(l.find(val)==l.end())
    {
       l[val]=i;
       r[val]=i;
    }
    else
    {
     l[val]=min(l[val],i);
     r[val]=max(r[val],i);
    }
   }


   ll maxv=-1;
  itr=r.begin();
  mapiter(l,itl)
   {
     ll v=itl->first;
     if(r[v]!=-1)
     {    ll redv=((r[v]-l[v]+1)/w);
          if(((r[v]-l[v]+1)%w)>0)
          redv++;

          if(redv<=m)
          {    maxv=v+1;
               if(l.find(v+1)==l.end())
               {  l[v+1]=l[v]; r[v+1]=r[v]; }
                else
               {
                 l[v+1]=min(l[v+1],l[v]);
                 r[v+1]=max(r[v+1],r[v]);
               }
               m-=redv;
               maxm=max(maxm,v+1);
          }
          else
           break;

     }
     itr++;
     
  }

  cout<<maxv<<endl;
 
 return 0;

  
}
