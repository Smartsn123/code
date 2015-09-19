#include<bits/stdc++.h>
using namespace std;
#define ll unsigned  long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 1000006


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll func(ll mid)
{
   ll sum=(mid)*(mid+1)*(2*mid+1);
   sum/=6;
   return sum;
}


int main()
{  ll t;
   in(t);
  while(t--)
  { 
     ll mid;
     ll S,ans,lo=1,hi=pow(10,10);
     in(S);
     while((hi-lo) > 1)
     {  // cout<<mid<<" "<<func(mid)<<endl;
        mid=lo+((hi-lo)/2);

         if(func(mid)>S)
           hi=mid;
         else
           lo=mid;

     }
     
     cout<<lo<<endl;   
  }
  return 0;
}

