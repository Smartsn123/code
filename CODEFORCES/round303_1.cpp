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
  ll n,mat[101][101];

int main()
{ fastinput;
  

  cin>>n;
  loop(i,0,n)
  {
     loop(j,0,n)
      cin>>mat[i][j];
  }
   ll ct=0;
  bool flag[101]={0};
  loop(i,0,n)
  {  flag[i]=1;
     loop(j,0,n)
     {
        if(mat[i][j]==1 || mat[i][j]==3)
        { flag[i]=0;ct++; break;}
     }
     
  }
 
  cout<<n-ct<<endl;
  loop(i,0,n)
    {if(flag[i])
     cout<<i+1<<" ";
    }
  if((n-ct) >0)
   br;

  
}
