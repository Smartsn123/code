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

ull CeilInd(ull arr[],int l,int r ,ull val)
{
   if(l==r)
   return l;
   ull mid=l+(r-l)/2;
   
   return  arr[mid]<val ? CeilInd(arr,mid+1,r,val):CeilInd(arr,l,mid,val);
   
}


ull LIS(ull arr[], int n)
{
  ull  MaxEle[n+1];
  MaxEle[0]=arr[0];
  int maxlen=1;
  loop(i,1,n)
  {
    if(arr[i]<arr[0])
      MaxEle[0]=arr[i]; 
    
   else if(arr[i]>MaxEle[maxlen-1])
      MaxEle[maxlen++]=arr[i];

   else
     {  MaxEle[CeilInd(MaxEle,-1,maxlen-1,arr[i])]=arr[i];

  // loop(j,0,maxlen)
  // cout<<MaxEle[j]<<" ";
  // cout<<endl;

  }
   
 
  return maxlen;
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

