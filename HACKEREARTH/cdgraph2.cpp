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
  int t;
  in(t);
  while(t--)
  {
     int m,a,b;
     in(m);
     map<int,int> mymap;
     
     while(m--)
     {    cin>>a>>b;
          mymap[a]++;
          mymap[b]++;
     }

    cout<<mymap.size()<<endl;
     
  }

  return 0;
}
