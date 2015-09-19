 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)

ll mat[1000][1000];
ll row[1000][1000];
ll dp[1000][1000];

int main()
{
   ll t;
   cin>>t;
   while(t--)
   { ll n;
     
     cin>>n;

     loop(i,0,n)
     {
          loop(j,0,n)
           cin>>mat[i][j];
      }

    loop(i,0,n)
     {
          loop(j,0,n)
           { 
              if(j==0)
               row[i][j]=mat[i][j];
              else
                row[i][j]=row[i][j-1]^mat[i][j];
           }
      }



      loop(i,0,n)
     {
          loop(j,0,n)
           { 
              if(j==0 && i==0)
               dp[i][j]=mat[i][j];
              else if(i==0)
                dp[i][j]=row[i][j];
              else
                dp[i][j]=dp[i-1][j]^row[i][j];
           }
      }


       ll max_x=0;
       loop(i,0,n)
         {
              loop(j,0,n)
              {
                  loop(i1,i,n)
                   {
                        loop(j1,j,n)
                        {  ll res;
                           if(i==0)
                           res=dp[i1][j1]^dp[i1][j-1]; 
                           else if(j==0)
                           res=dp[i1][j1]^dp[i-1][j1];
                           else
                           res=dp[i1][j1]^dp[i-1][j1]^dp[i1][j-1]^dp[i-1][j-1];
 
                           max_x=max(max_x,res);
                              
                        }
                   }  
              }
         }
     
    
   
     cout<<max_x<<endl;   
  }
   return 0;
}
