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
#define MAXL 1000006

ll arr[MAXL];
ll sum[MAXL],n,sc;

int main()
{ fastinput;
  cin>>n;
  arrin(arr,n);
  sort(arr,arr+n);
  sum[0]=arr[0];
  loop(i,1,n)
    sum[i]=sum[i-1]+arr[i];
    
  sc+=sum[n-1];
  
  ll lft=0;
 
   while(lft<=n-2)
   {
       sc+=arr[lft]+(sum[n-1]-sum[lft]);
       lft++;
   }
  
 cout<<sc<<endl;
  return 0;
}
