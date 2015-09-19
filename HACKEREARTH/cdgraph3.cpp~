#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a) cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007

struct node
{ int val;
  int inv;
  vector<node*> ne;
};

int col[1000006];
ll ct[1000006];

int counth(node * root)
{  
   int ind=root->val;
   root->inv=1;
   col[ind]=1;

   for(int i=0;i<root->ne.size();i++)
   {
      if(col[root->ne[i]->val]==0)
        root->inv+=counth(root->ne[i]);
   }


   return root->inv;
   
   
}

int main()
{
  ll t;
  in(t);
  while(t--)
  {
    ll n,a,b,m;
    in(n);in(m);
    node ns[n+2];
   
    loop(i,0,n+3)
    { ns[i].val=i;
      col[i]=0; ct[i]=0;}

    loop(i,0,m)
    {
        cin>>a>>b;
        ns[a].ne.push_back(&ns[b]);     
    }


    int j=1;
    ll min_m=INT_MAX;
   
    while(j<=n)
    {   
        
        counth(&ns[j]);
        while(col[j]==1)
         j++;
    }

   loop(s,0,n)
   {
    loop(i,1,n+1)
    {
       for(int k=0;k<ns[i].ne.size();k++)
         ns[i].inv=max(ns[i].inv,ns[i].ne[k]->inv);
    }
   }

    loop(i,1,n+1)
      {
           // cout<<ns[i].inv<<endl;
            min_m=min(min_m,ns[i].inv);
      }


   cout<<min_m<<endl;
  }
  return 0;
 }
