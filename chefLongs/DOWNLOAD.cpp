#include<bits/stdc++.h>
using namespace std;
#define ll  int
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
#define gc getchar_unlocked
#define MAXL 1000006
void scnum(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll arr[MAXL],n,q,k;
struct range{
ll x;
ll y;
}; 
bool comp(const range & r1,const range & r2)
{  return (r1.x < r2.x); }

ll l[MAXL];
ll r[MAXL];
ll val1[MAXL];
ll val2[MAXL];
bool col[MAXL];
range ri[MAXL];
//finds the no of ranges  in which tm lies 


void make_tree(ll a,ll b,ll ind)
{
    l[ind]=a;
    r[ind]=b;
   ll mid=a+((b-a)/2);
   if(a==b)
    {val1[ind]=ri[a].y;val2[ind]=ri[a].y; return ;}

   make_tree(a,mid,2*ind+1);
   make_tree(mid+1,b,2*ind+2);
   val1[ind]=min(val1[2*ind+1],val1[2*ind+2]);
   val2[ind]=max(val2[2*ind+1],val2[2*ind+2]);
}

ll query(ll ql,ll qr,ll ind,ll v)
{ 
   ll a=l[ind];
   ll b=r[ind];  
   //cout<<ind<<" "<<a<<"-"<<b<<endl;;
   ll mid=a+((b-a)/2); 
   if(ql > b || qr< a || val2[ind]<v)
    {//cout<<" out of range 1"<<endl; 
     return 0;}

   if(ql<=a && qr>=b  && val2[ind]>= v && val1[ind]>=v)
     {
         val2[ind]=-1;
         val1[ind]=INT_MAX;
         //cout<<" in range 1 "<<endl;
         return b-a+1; 
         
     }
    
   
  
  return (query(ql,qr,2*ind+1,v)+query(ql,qr,2*ind+2,v));
 
}


ll  find_ranges(ll tm)
{  ll ans=0,i=0,low=0,high=n,lf=-1,rt=-1;
    
   ll mid;
    if(ri[low].x<=tm)
      lf=low;

    low=0; high=n;
    while(high-low >1 )
    {
        mid= low+(high-low)/2;
        
        if(ri[mid].x <= tm)
          low=mid;
        else
          high=mid;
    }

      rt=low;
   // cout<<lf<<" , "<<rt<<endl;
   if(lf!=-1)
    ans=query(lf,rt,0,tm);
    
    return ans;
}





int main()
{//fastinput;
  scnum(n);
  loop(i,0,n)
   {scnum(ri[i].x); scnum(ri[i].y);}
  std::sort(ri,ri+n,comp);
 // loop(i,0,n)
  //  cout<<ri[i].x<<"-"<<ri[i].y<<endl;
   // now we have sorted list of telecast times according to their starting and ending time

   scnum(q);
    while(q--)
    {    make_tree(0,n-1,0);
         ll tm,ans=0;
         scnum(k);
          while(k--)
          {
             scnum(tm);
             ll va=find_ranges(tm);
             //cout<<va<<endl;
             ans+=va;
          }   
          
           printf("%d\n",ans);   
    }
  return 0;
}

