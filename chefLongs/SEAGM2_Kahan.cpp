#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
 
ll pow(ll a, ll  b)
{
  if(a==0)
   return 1;
  ll ans=1;
  ans=pow(a,b/2);
  ans*=ans;
  if(b%2)
  ans*=a;
  return ans;
}
 
int main()
{ fastinput;
  ll t;
  cin>>t;
  while(t--)
  {
    int n,m;
    long double ans,inp, P[15][10004];
    int iszero[15];    

    cin>>n>>m;
    loop(i,0,n)
    {      iszero[i]=0;
          loop(j,0,m)
          { cin>>inp;
            if(inp==0.0000)
              iszero[i]=1;
            P[i][j]=log(inp);
          }
    }
   
   
    long double sums[10004],sum=0,lt=0.0000001;
   
    loop(i,0,n)
    {     sums[i]=0.0000000;
          long double c=0.0;
       if(iszero[i]==0)
         { loop(j,0,m)
            { 
                long double y = P[i][j] - c; // try to adjust for previous lost accuracy
                long double t = sums[i] + y;
                c = (t - sums[i]) - y; //  try and gets some information on lost accuracy
                sums[i] = t;
            }
          }
        else
           sums[i]=INT_MIN;
    }

    long double res=1.000000;
  
 
    
    if(sums[0]==INT_MIN)
     printf("0.000000\n");
    else
    { 
         loop(i,1,n)
         {  if(sums[i]!=INT_MIN)
              sums[i]=exp(sums[i]-sums[0]);
            else
              sums[i]=0;
         }

        long double c=0.0;
        loop(i,1,n)
        {      long double y = sums[i] - c; // try to adjust for previous lost accuracy
               long double t = res + y;
               c = (t - res) - y; //  try and gets some information on lost accuracy
               res = t;
       }       
          printf("%.6Lf\n",1.0/res);
     }
    
       
      
  }
  return 0;
} 
