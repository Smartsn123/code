#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)


bool isprime[100005];
ll primes[100005];
ll size;

ll P[15][100001];// stores number of times j appears in row i

void seive()
{
    //cout<<"lll"<<endl;
   loop(i,2,100001)
   isprime[i]=1;
   //cout<<"lll"<<endl;
   for(ll i=2;i<100001;)
   {  
      primes[size++]=i;
      
     // cout<<i<<"--"<<endl;
      for(ll j=i;(i*j)<=100001;j++)
        isprime[j*i]=0;

      i++;

      while(i<100001 && isprime[i]==0 )
      i++;
      if(i>=100001)
       break;
   }
}

ll findpow(ll &a,ll b)
{
  ll c=0;
  while(a%b==0 && a>=b)
    {
       c++;
       a=a/b;
     }
   return c; 
}


void countprimes(ll *p , ll *c)
{
   loop(i,1,100001)
   {
       if(p[i]>0)//if ith value is present in the present row
       { 
         ll j=0;ll num=i;
         while(num>=primes[j] )
          {  c[j]+=(p[i]*findpow(num,primes[j]));//no of times a prime appears due to no i is :
             j++;                                // (no. of times i appears X no. of times p appears in prime factoziation of i  
          }
       }
   }
   
}


int main()
{ fastinput;
  seive();
 // loop(i,0,20)
  // cout<<primes[i]<<endl;
  // cout<<size<<endl;
  ll t;
  cin>>t;
  while(t--)
  {
    int n,m;
    long double ans,inp;
     loop(i,0,15)
    {
        loop(j,0,100001)
           P[i][j]=0;
    }

    cin>>n>>m;
    loop(i,0,n)
    {     loop(j,0,m)
           {cin>>inp;
             P[i][int(inp*10000)]++;
           }
    }
   

    ll  CP[15][size+2];// stores no of times jth prime appears in product of row i or say pow of jth prime in produxt of row i
    loop(i,0,15)
    {
       loop(j,0,size+1)
         CP[i][j]=0;
    }
   
    loop(i,0,n)
     countprimes(P[i],CP[i]);  
    
    long double sum=1;
    ll row1[100002];
    loop(i,1,n)
    {     
          loop(j,0,size)
          row1[j]=CP[0][j];
       
         loop(j,0,size)
         {  ll mini=min(CP[i][j],row1[j]);
            CP[i][j]-=mini; row1[j]-=mini;
         }

        long double prodN=0,prodD=0;

        loop(j,0,size)
        {  
            prodN+=double(CP[i][j])*log(double(primes[j]));
            prodD+=double(row1[j])*log(double(primes[j]));          
        }
         if(P[0][0]>0 || P[i][10000]>0)
         { sum=0; break;}
         
         if(P[i][0]==0)
           sum+=exp(prodN-prodD);

    }
   //  cout<<"Here"<<endl;

    
     if(sum==0)
     printf("0.000000\n");
     else
     printf("%0.6Lf\n",1.0/sum);
   
   
   
  
  }
  return 0;
}
