#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(it,mymap) for(it=mymap.begin();it!=mymap.end();it++)

double mind(double a, double b)
{
  if(a>b )
   return b;
  else
  return a;
}

int main()
{ int n;
  double inp,w,maxm=0;

  cin>>n>>w;

  ll arr[1000006];
  arrin(arr,2*n);
  
  sort(arr,arr+(2*n));
 // loop(i,0,2*n)
 // cout<<arr[i]<<" ";
 //  br;
  double mini=double(arr[(((2*n)-1)/2 )+1])/2;
  //cout<<mini<<endl;
  mini=mind(mini,double(arr[0]));
  //cout<<mini<<endl;
  double ans=3*n*mini;
  if(ans>w)
   printf("%0.6f\n",w);
  else
   printf("%0.6f\n",ans);  
  
  
  return 0; 
  
}
