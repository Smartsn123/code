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


int main()
{ fastinput;
  ll n,m,b,mod;
  ll arr[1000005];
  cin>>n>>m>>b>>mod;
  arrin(arr,n);

  sort(arr,arr+n);

  ll dp[m+2][b+2][m+2]; // dp[i][j][k] no of ways of getting maximum sum k till ith element using j times

  loop(i,0,m)
  {
     loop(j,0,b+1)
       { 
          loop(k,0,m+1)
           {  ll val=j-(k*arr[i]);
              if(i==0)
              {
                   if(val<0)
                     dp[i][j][k]=0;
                    else
                     dp[i][j][k]=1;
             }
              else{
              
              if(b-(j*arr[i])<0)
                dp[i][j][k]=0;
              else
               {
                   ll sum=0;
                   loop(d,0,m+1)
                      sum=(sum+dp[i-1][val][d])%mod;
                   dp[i][j][k]=(sum+1)%mod;
               }
              }
           }
       }
  }
  
   
  cout<<dp[m-1][b][m]<<endl;
  return 0;
}
