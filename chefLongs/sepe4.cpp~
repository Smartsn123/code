#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
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
void scnum(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

map<string,bool> mymap;
map<ll,string> mymap1;
map<ll,string>:: iterator it;
int main()
{fastinput;
   ll k,n;
   cin>>k;
     string dl,tests;
   loop(i,0,k) 
    { cin.ignore();
      cin>>dl;
       mymap[dl]=1;
    }
     cin>>n;
    cin.ignore();
    getline(cin,tests);
    ll lf=0;
    loop(i,0,tests.length()+1)
    {
       if(tests[i]==' ' || i==tests.length() )
       { mymap1[i]=tests.substr(lf,lf-i); lf=i+1;}
      
    }
    string res="";
    mapiter(mymap1,it)
    {
      /*if(mymap[it->second])
       {   string tmp=it->second;
           res+=string(toupper(tmp[0]))+"."; 
       } */
      cout<<it->second<<endl;
    }

    loop(i,0,res.length()-1)
      cout<<res[i];
    br;
  
  return 0;
}

