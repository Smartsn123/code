#include<bits/stdc++.h>
using namespace std;
#define ll   int
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
void scnum(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



ll mat[500][500];
int main()
{
   ll t;
    scnum(t);
  while(t--)
  {
   
   map<ll,ll> x;
   map<ll,ll>  y;
   map<ll,ll>::iterator itx,ity;
   ll n;
    scnum(n);
    loop(i,0,n)
      { loop(j,0,n)
            scnum(mat[i][j]);
           
       }

   loop(i,0,n)
    { loop(j,0,n)
      {
          x[mat[i][j]]=i;
          y[mat[i][j]]=j;   
      }  
     }
   ity=y.begin();
   ll xi,yi,xip,yip,stps=0;
   mapiter(x,itx)
   {
       
       xi=itx->second;
       yi=ity->second;
       //cout<<itx->first<<": "<<xi<<", "<<yi<<endl;
       if(itx->first!=1)
            stps+=abs(xi-xip)+abs(yi-yip);
            

       xip=xi;
       yip=yi; 
       ity++;   
   }
    
    printf("%d\n",stps);
  }
  return 0;
}

