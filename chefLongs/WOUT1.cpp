#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000006
 
 
ll l[3000000];
ll r[3000000];
ll lazy[3000000];
ll val[3000000];
ll st[MAXL];
 
void make_tree(ll x, ll y,ll ind)
{
   l[ind]=x;
   r[ind]=y;
   val[ind]=0;
   lazy[ind]=0;
   if(x==y)
     return ;
   else
    {   ll mid=x+(y-x)/2;
        make_tree(x,mid,2*ind+1);
        make_tree(mid+1,y,2*ind+2);
   }
   
}
 
void update(ll ql,ll qr ,ll ind)
{
   ll x=l[ind];
   ll y=r[ind];
   if(lazy[ind]!=0)
   {
       val[ind]+=(y-x+1)*lazy[ind];
       if(x!=y)
        {
           lazy[2*ind+1]+=lazy[ind];
           lazy[2*ind+2]+=lazy[ind];
        }
        lazy[ind]=0;
   }
 
   if(x >qr || y<ql)
    return ;
   if(x>=ql && y<=qr)
    {  
       val[ind]+=(y-x+1);
       if(x!=y)
       {
           lazy[2*ind+1]+=1;
           lazy[2*ind+2]+=1;
       }   
       return ;
    }
    
     update(ql,qr,2*ind+1);
     update(ql,qr,2*ind+2);
     val[ind]=val[2*ind+1]+val[2*ind+2];
   
}
 
ll query(ll ql,ll qr ,ll ind)
{
  if(ql>qr)
    return 0;
  ll x=l[ind];
   ll y=r[ind];
  if(x >qr || y<ql)
    return 0;
   
   if(lazy[ind]!=0)
   {
       val[ind]+=(y-x+1)*lazy[ind];
       if(x!=y)
        {
           lazy[2*ind+1]+=lazy[ind];
           lazy[2*ind+2]+=lazy[ind];
        }
        lazy[ind]=0;
   }
   
   
   if(x>=ql && y<=qr)
    return val[ind]; 
   else
     return query(ql,qr,2*ind+1)+query(ql,qr,2*ind+2);
 
   
}
 
 
int main()
{fastinput;
  int t;
  cin>>t;
  while(t--)
  {
     
     ll n,x,y,maxm=INT_MIN,max_i=0,h;
    
     cin>>n>>h;
    
     make_tree(0,n-1,0);
     
     loop(i,0,n)
     {cin>>x>>y; st[i]=-1; update(x,y,0);}
 
  //   loop(i,0,n)
    //   cout<<arr[i]<<" ";
    // br;
      ll res=query(0,h-1,0);
       maxm=res;
      
      loop(i,0,n-h)
        { 
          if(st[i]==-1)
           st[i]=query(i,i,0);
          if(st[i+h]==-1)
           st[i+h]=query(i+h,i+h,0);
 
          res=res-st[i]+st[i+h];
          maxm=max(res,maxm);
        }
         
     
     cout<<(n*h)-maxm<<endl;
    
  }
  return 0;
} 
