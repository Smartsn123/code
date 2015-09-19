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
{ int col;
   int v;
  vector<node*> ne;
};

int testarr[1000006];
int size;

bool wins(node* r,bool choser)
{
  //cout<<"at node "<<r->v;
  bool ifwins=1;
  int mrk1=0;
  int mrk2=0;
  //loop(i,0,size+1)
   //cout<<"  ";
 // cout<<r->v<<"  ";
  //size++;
  r->col=1;
  if(choser==1)
  {  int flag=0;
     //cout<<" choser 1  "<<r->ne.size()<<endl;
   //  cout<<endl;
     for(int i=0;i< (r->ne.size());i++)
      {
          if(r->ne[i]->col==0)
          {  mrk1=1;
             if(wins(r->ne[i],0))
              { ifwins=1; flag=1;}
          }
          if(flag)
             break;
      }
      if(!flag)
       ifwins=0;
   }


   else if(choser==0)
   {  int flag=0;
      //cout<<" --choser 0 "<<r->ne.size()<<endl;
      // cout<<endl;
     for(int i=0;i<(r->ne.size());i++)
      {
          if(r->ne[i]->col==0)
          {  mrk2=1; 
             if(!wins(r->ne[i],1))
              { ifwins=0; flag=1;}
          }
          if(flag)
             break;
      }
      if(!flag)
       ifwins=1;
   }
    r->col=0;
   // size--;
  /*  if(choser==0 && mrk2==0)
      {cout<<"wins"<<endl; return 1;}
    else if(choser==1 && mrk1==0)
      {cout<<"loses"<<endl; return 0;}
    else */
     return ifwins; 
}

int main()
{
  fastinput;
  ll t;
  in(t);
  while(t--)
  {
    ll n,a,b,m;
    in(n);in(m);
    node ns[n+2];
   
    loop(i,0,n+2)
     { ns[i].col=0;
       ns[i].v=i;
     }

    loop(i,0,m)
    {
        cin>>a>>b;
        ns[a].ne.push_back(&ns[b]);
        ns[b].ne.push_back(&ns[a]);
          
    }

    int ans=0;
    loop(i,1,n+1)
    {  if(wins(&ns[i],0))
        ans++;
    }  

    cout<<ans<<endl;
   
  }
    return 0;
}
