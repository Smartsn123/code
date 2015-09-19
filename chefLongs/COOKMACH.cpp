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
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)


bool ispow[10000001];

void make()
{ ll i=0;
  ll v=pow(2,i);
  while(v<=10000000)
  {ispow[v]=1; v=pow(2,++i);}
}


int main()
{fastinput;
  make();
  int t;
  cin>>t;
  while(t--)
  {
     ll a,b;
     cin>>a>>b;
     ll steps=0;
     while(ispow[a]==0)
     {  if(a%2==1)
         a=(a-1)/2;
        else
         a=a/2;
        steps++;
     }

     
     steps+=abs(log2(a)-log2(b));
      
     cout<<steps<<endl;
     
    
  }
  return 0;
}
