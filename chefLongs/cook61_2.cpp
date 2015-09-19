#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)



int main()
{fastinput;
  int t;
  cin>>t;
  while(t--)
  {
    string x,y;
    cin.ignore();
    cin>>x;
     cin.ignore();
    cin>>y;
    //cout<<x<<endl;
   //cout<<y<<endl;
     ll c=0;  
    loop(i,0,x.length())
    {
       if( x[i] !='?'  && y[i]!='?'  &&  x[i]!=y[i]  )
           {c=1; break;}
    }   
  
     if(c==0)
    cout<<"Yes"<<endl;
     else
    cout<<"No"<<endl;
  }
  return 0;
}

