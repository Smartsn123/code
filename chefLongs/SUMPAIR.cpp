#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)



int main()
{fastinput;
  int t;
  cin>>t;
  while(t--)
  {
     ll arr[1000006];
     ll n,d;
      cin>>n>>d;
     arrin(arr,n);

     sort(arr,arr+n);
   //  loop(i,0,n)
     // cout<<arr[i]<<" ";
     //br;
    
     ll i=n-1,sums=0;
     
      while(i>=1)
       {
          if(abs(arr[i]-arr[i-1])<d)
           { sums+=(arr[i]+arr[i-1]);
             i-=2;
            }
           else
           i--;
       }
     
     cout<<sums<<endl;
     
    
  }
  return 0;
}
