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
  vector<node*> ne;
};
int col[1000006];
ll ct[1000006];

void countb(node * root,ll &score,int col[])
{  int ind=root->val;
   score+=ct[ind];
   col[ind]=1;
   for(int i=0;i<root->ne.size();i++)
   {
      if(col[root->ne[i]->val]==0)
        countb(root->ne[i],score,col);
   }
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
        ns[b].ne.push_back(&ns[a]);
          
    }

    loop(i,1,n+1)
      cin>>ct[i];

    int j=1;
    ll max_m=0;
    while(j<=n)
    {   
        ll ans=0;
        countb(&ns[j],ans,col);
       // cout<<ans<<endl;
        max_m=max(max_m,ans);
        while(col[j]==1)
         j++;
    }

   cout<<max_m<<endl;

  }
  return 0;
}
