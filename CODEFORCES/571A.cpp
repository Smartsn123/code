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
ll arr1[MAXL];
ll arr2[MAXL];
ll n1,n2,k,m;

int main()
{ fastinput;
  
  cin>>n1>>n2;
  cin>>k>>m;

  arrin(arr1,n1);
  arrin(arr2,n2);
  sort(arr1,arr1+n1);
  sort(arr2,arr2+n2);

  if(arr1[k-1] < arr2[n2-m])
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
   
   
  
  return 0;    
   
}
