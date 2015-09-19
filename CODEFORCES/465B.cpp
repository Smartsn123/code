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
bool arr[MAXL];
ll n;

int main()
{ fastinput;
  
  cin>>n;
  arrin(arr,n);
  ll ans=0,mk=0,i=0;

   while(i<n)
   {
       if(arr[i]==1)
        {  while(arr[i]==1 && i<n)
            { ans++;i++;}    
        }
        else
            { if(i>0 && arr[i-1]==1)
              mk++;
              i++;
            }    
   }

  
  cout<<ans+max(0,mk-(arr[n-1]==0))<<endl;
  
  return 0;
}
