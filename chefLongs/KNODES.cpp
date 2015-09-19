#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)

struct node
{
   int lv;
   bool col;
   vector<int> ne;
};

void dfs(int r,node nds[],int l)
{   
    nds[r].col=1;
    nds[r].lv=l;
   loop(i,0,nds[r].ne.size())
   {  int j=nds[r].ne[i];
      if(nds[j].col==0)
       dfs(j,nds,m,found,size,lv+1);
    }
  
}


int main()
{ fastinput;
  int t;
  cin>>t;
  while(t--)
  {
    int n,x,y;
    cin>>n;
    node nds[n+2];
    loop(i,1,n+1)
      {
        nds[i].col=0;
        nds[i].lv=0;
      }
    loop(i,0,n-1)
     { cin>>x>>y;
       nds[x].ne.push_back(y);
       nds[y].ne.push_back(x);
      }   
  
    ll q,vl,k;
    dfs(1,nds,0);
    
   cin>>q;
   while(q--)
     { cin>>k;
       int flag=1;
       map<int,int> mymap;
       loop(i,0,k)
         { cin>>vl;
           mymap[vl]=1;
         }
        
      
      

       if(flag)
        cout<<"Yes\n";
       else
        cout<<"No\n";
     }
  }
  return 0;
}
