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



ull LIS(ull arr[], int n)
{
  ull  lis[n+1];
   lis[0]=1;
    
    loop(i,1,n)
    {   lis[i]=lis[i-1];
        loopr(j,i-1,0)
         {   if(arr[j]<arr[i])
             lis[i]=max(lis[i],1+lis[j]);
         }
    }
   return lis[n-1];
}

int main()
{ 
  fastinput;
  
  ull arr[100005];
  ull n;
  cin>>n;
  arrin(arr,n);
  cout<<LIS(arr,n)<<endl;
  
   return 0;
}

