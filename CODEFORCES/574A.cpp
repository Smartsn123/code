
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
ll arr[MAXL];
ll res[MAXL];
ll n;

ll find_max()
{
  ll maxm=INT_MIN; ll mi=0;
  loop(i,1,n)
  {
     if(arr[i]>maxm)
      {maxm=arr[i];mi=i;}
  }
  return mi;
}

int main()
{ fastinput;
  
  cin>>n;
  arrin(arr,n);

  ll lims=arr[0];
  ll mi=find_max();
  while(arr[mi]>= lims)
   {
       arr[mi]-=1;
       lims++;
       mi=find_max();
   }
   
  cout<<lims-arr[0]<<endl;
  
  return 0;    
   
}
