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
ll arr[3];
ll l,dif,c1;

int main()
{ fastinput;
  cin>>arr[0]>>arr[1]>>arr[2]>>l;

  sort(arr,arr+3);

   dif=arr[2]-arr[0]-arr[1];
  //cout<<dif<<endl;
  ll sum=0;
  loop(i,0,l+1)
  {  ll n=dif+i+2;
     if(n >0)
      sum+= (n*(n-1))/2;
  }
 cout<<sum<<endl;
 ll ans= ( (l+3)*(l+2)*(l+1) )/6;

 cout<<max(0,ans-sum)<<endl;    
 return 0;  
}
