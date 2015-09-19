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

ll n, arr[MAXL];
ll sum[MAXL];
int main()
{ fastinput;
 

  cin>>n;
  arrin(arr,n);

  
  ll ct=1,maxm=-1,rem=0;
 ct=1;
   sort(arr,arr+n);
   sum[0]=arr[0];
   loop(i,1,n) 
   sum[i]=arr[i]+sum[i-1];
    ll i=1,sub=0;
    while(i<n)
   {
       if((sum[i-1]-sub)<=arr[i])
       { ct++; }
       else 
       {sub+=arr[i];}
        
       i++;
   }
    maxm=max(ct,maxm);
 
  cout<<maxm<<endl;
 return 0; 
}
