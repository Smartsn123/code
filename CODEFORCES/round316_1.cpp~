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
#define mod 1000000007
#define MAXL 1000006
#define Pair pair<ll,ll>

  ll mat[102][102],n,m,win[102],tmp[102];

int main()
{ fastinput;


  cin>>n>>m;

  loop(i,0,m)
  {
     loop(j,0,n)
      cin>>mat[i][j];
  }

  loop(i,0,m)
  {  
     ll maxm=-1; ll m_i=-1;
      loop(j,0,n)
      {
        if(mat[i][j]>maxm)
          { maxm=mat[i][j]; m_i=j;}
      }
     //cout<<m_i<<endl;
     win[m_i]++;
  }
   ll maxm=-1; ll m_i=-1;
  loop(i,0,n)
   {
        if(win[i]>maxm)
          { maxm=win[i]; m_i=i;}
   }
   cout<<m_i+1<<endl;
  
return 0;   
}
