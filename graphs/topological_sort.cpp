//Written by Sunny Singh IPG_2012086 ABV-IIITM Gwalior 
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
#define MAXL 1000006


class graph
{   vector<ll> val;
    vector<bool> col;
    vector<vector<ll> >adj;
    vector<ll> indeg;
    vector<ll> odeg;
    
    public:
      graph(ll n)
      { 
        loop(i,0,n+2)
         {val.push_back(0); indeg.push_back(0); odeg.push_back(0);col.push_back(0);}
      }

     void add_edge(ll u,ll v)
    {
         adj[u].push_back(v);
         indeg[v]++; odeg[u]++;
    }
  
   void dfs(ll ind,vector<ll> stk)
    {
         loop(i,0,adj[i].size())
          {
            if(col[adj[i]]==0)
             {stk.push_back(adj[i]); }
          }

        loop(i,0,adj[i].size())
          {
            if(col[adj[i]]==0)
             {col[adj[i]]=1;
              dfs(adj[i],stk);  
             }
          }
         
    }

    void topological_sort()
    { 
       //find all the nodes whose degree is 0
        vector<ll> cur_lev,stk;
        loop(i,1,n+1)
         {if(indeg[i]==0)
           cur_lev.push_back(i);
         } 
       
       loop(i,0,cur_lev.size())
          {stk.push_back(cur_lev[i]); col[cur_lev[i]=1;}
       loop(i,0,cur_lev.size())
          dfs(cur_lev[i],stk);           
      
    }

  
}


int main()
{ fastinput;
  
   
}
