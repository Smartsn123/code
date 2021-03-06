
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
ll arr[MAXL];
bool col[MAXL],f;
ll n,m,x,y,beg;
vector<ll> adj[5000];
ll minm=INT_MAX;

void dfs_sol(ll ind,ll dist,ll prev)
{
    if(dist==3)
    {   loop(i,0,adj[ind].size())
       {  ll ni=adj[ind][i];
          if(ni== beg)
           { //cout<<"SOL : "<<beg<<" , "<<ind<<" ," <<prev<<endl;
             minm= min(minm,adj[beg].size()+adj[ind].size()+adj[prev].size()-6);break;}
       }
        return ;
    }

   else if(dist == 2 || dist==1)
   {
       loop(i,0,adj[ind].size())
       {  ll ni=adj[ind][i];
          if(ni!= beg)
            dfs_sol(ni,dist+1,ind); 
       }
   }

  else
    return ;
    
}

int main()
{ fastinput;
  cin>>n>>m;
  loop(i,0,m)
  {
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
 
  }
 
  loop(i,1,n+1)
  {
     beg=i;
     dfs_sol(beg,1,0);
  }
   
  if(minm==INT_MAX)
    cout<<"-1"<<endl;
  else
    cout<<minm<<endl;
  return 0;    
   
}
