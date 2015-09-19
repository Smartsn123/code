#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
ull arr[100001][129];
ull cnt[129];


void count(ull l,ull max)
{
     loop(j,0,128)
          {  
              
               loop(k,0,j+1)
                 {  if(j==k)
                    arr[i][j^k] +=arr[i][k]*(arr[i][j]-1);
                    else
                    arr[i][j^k] +=arr[i][k]*arr[i][j];  
                 }       
          }
}


int main()
{ 
     ull t;
  
     
     ull n;

     cin>>t;
     loop(i,0,t)
      {cin>>n; arr[1][n]++;}

     
     
      
  
     loop(i,2,t+1)
     {
         loop(j,0,101)
          {  
              
               loop(k,0,128)
                 {  if(j==k)
                    arr[i][j^k] +=arr[i][k]*(arr[i][j]-1);
                    else
                    arr[i][j^k] +=arr[i][k]*arr[i][j];  
                 }       
          }

     }

    loop(i,1,t+1)
    {
          loop(j,0,6)
           cout<<arr[i][j]<<" ";
          br;
    }

    
    loop(i,0,128)
    {
           loop(j,0,t)
             cnt[i]+=arr[j][i];
    }
    

   ull ans=0;
   loop(i,0,128)
   ans= (ans + ((cnt[i]*(cnt[i]-1))/2 )  )%mod;
   
   cout<<ans<<endl;
  return 0;    
  
}
