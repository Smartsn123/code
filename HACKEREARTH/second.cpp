#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mapiterate(it,mapname)  for(it=mapname.begin();it!=mapname.end();++it)


 map<string,int> mymap;

int main()
{
   string st;
   int n;
   cin>>n;
  
   loop(i,0,n)
   {
    cin>>st;
    mymap[st]++;
   }
   int maxm=0;
    map<string,int>:: iterator it;

   mapiterate(it,mymap)
    maxm=max(maxm,it->second);
   
   cout<<maxm<<endl;
   return 0;  
}
