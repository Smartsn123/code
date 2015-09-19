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



int main()
{fastinput;
  ll t,m,x,y,v;
  cin>>t;
  loop(i,0,t)
  {
      typedef pair<ll,ll> Pair;
      map<Pair,ll> mymap;
      map<Pair,ll>:: iterator it;
      bool clr[102];
      loop(i,0,102)
        clr[i]=0;
      cin>>m>>x>>y;
      
      loop(i,0,m)
         {  cin>>v;
            ll w=x*y;
            Pair P=make_pair(max(1,v-w),min(100,v+w));
            mymap[P]=1;   
         }
      
      ll ct=0;
    
     mapiter(mymap,it)
      {
         ll l=it->first.first;
         ll r=it->first.second;
         loop(j,l,r+1)
          clr[j]=1;
      }

           
     loop(i,1,101)
         {
            if(clr[i]!=1)
             ct++;
         }  
     
    cout<<ct<<endl;
  }
  return 0;
}
