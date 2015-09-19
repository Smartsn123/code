#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a) cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007


int main()
{
  int n,a,sum=0;
  in(n);
  loop(i,0,n)
  {
     cin>>a;
     sum+=a;
  }

  //cout<<sum<<endl;

  if(sum%2==0 && (sum/2)==(n-1))
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
 
 return 0;
}
