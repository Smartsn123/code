//Written by Sunny Singh IPG_2012086 ABV-IIITM Gwalior 
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

int n,s;

map<ll,ll, std::greater<ll> > buy;
map<ll,ll > sell;

map<ll,ll>:: iterator bi,si;

int main()
{ fastinput;
  
  
  cin>>n>>s;
  char d;
  ll pi,qi;
  loop(i,0,n)
  {  
    cin.ignore();
    cin>>d>>pi>>qi;
     if(d=='S')
       sell[pi]+=qi;
     else
       buy[pi]+=qi;
  }

 // cout<<"---"<<endl;

    int m1=0,m2=0;
    
    if(s>sell.size())
     { m1=sell.size();
       si=sell.end();
       
     }
    else
     { si=sell.begin();
       loop(b,0,s-1)
        si++;
      m1=s;
     }

   ll k=0;
   while(k<m1)
   {   if(si==sell.end())
        si--;
      cout<<"S "<<si->first<<" "<<si->second<<endl;
      if(si==sell.begin())
        break;
      si--;
      k++;
   }

  bi=buy.begin();
  m2=min(s,buy.size());
  k=0;
   while(k<m2)
   {  
     if(bi==buy.end())
       break;
      cout<<"B "<<bi->first<<" "<<bi->second<<endl;
        
       bi++;
       k++;
       
   }
  
   
  return 0;    
}   
