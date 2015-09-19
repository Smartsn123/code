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



int main()
{fastinput;
 
 ll n=1000000;
 ll m=1000000;
  
 cout<<n<<" "<<m<<endl;
 loop(i,0,n)
  { int v=rand() % 1000000000 + 1;
    cout<<v<<" ";
  } 

  br;

  char ct[3];
   ct[0]='<'; ct[1]='>'; ct[2]='=';

  char b[2];
  b[0]='C';b[1]='D';

  loop(i,0,m)
  {  int i1= rand() % 3 + 1;
     int k=rand() % 1000000000 + 1;
     int  i2= rand() % 2 + 1;
    cout<<ct[i1-1]<<" "<<k<<" "<<b[i2-1]<<endl;
  }
 return 0;
 
}
