
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




ll a,b;
int main()
{ fastinput;
  
  cin>>a;
  if(a==1 || (a-pow(2,int(log2(a))))==0  )
  cout<<1<<endl;
  else
  {
    int i=1,div=2;
    ll ans2=1+ (a-pow(2,int(log2(a))));
    while(1)
    {  
         ll div1=pow(2,i+1);
         if(div1<=(a/2))
           {  i++; div=div1;}
         else
           break;           
    }
    
    ll ans=(a/div)+a%div;
    cout<<min(ans,ans2)<<endl;
  } 
  
  return 0;    
   
}
