#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define ull long long int
#define mod 1000000000



void nCr(ull arr[],ull n, ull k)
{
    ull C[k+1];
    ull i, j, h=0;
 
    C[0] = 1;
 
    for(i = 1; i <= n; i++)
    {
        for(j = min(i, k); j > 0; j--)
          {  if(j==i)
             C[j]=1;
             else 
             C[j] =( C[j] + C[j-1])%mod;

             //cout<<"C["<<i<<"]["<<j<<"]= "<<C[j]<<endl;
           }
 
        if(i>=k && i<=n)
           { arr[h++]=C[k];
             //cout<<C[k]<<endl;
           }
        
    }
   if(k==0)
    arr[h++]=1;
    
}


int main()
{

  ull t;
 
  in(t);
  while(t--)
   {
     ull n,m;
     in(n);in(m);
     ull init[m+1];
     ull ans[m+1];
     ull sum[m+1];
     

     nCr(init,2*m-1,m-1);
     //for(int i=0;i<=m;i++)
     // {
     //  out(init[i]); printf(" ");
     //  }
     // br;
 
      for(int i=0;i<=m;i++)
       { if(i==0)
         sum[i]=init[i];
         else
         sum[i]=(sum[i-1]+init[i])%mod;
        // out(sum[i]); printf(" ");
        }
      // br;
     
     for(int i=2;i<=n;i++)
      {
          for(int i=0;i<=m;i++)
           ans[i]=(sum[i]*init[i])%mod;

          for(int i=0;i<=m;i++)
         { if(i==0)
            sum[i]=ans[i];
           else
            sum[i]=(sum[i-1]+ans[i])%mod;
          }

          
      }

     ull res=sum[m]  ;
     out(res); br;
  
   }
 return 0;
}
