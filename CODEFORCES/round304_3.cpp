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
#define MAXL 1000006

  ll k,k1,k2,val;
  list<ll> l1,la,l2,lb;
ll fact[12];

ll ft()
{
  fact[0]=1;
  loop(i,1,12)
   fact[i]=fact[i-1]*i;
}
int main()
{ fastinput;
  ft();
  cin>>k;
  
  cin>>k1;
  while(k1--)
  {cin>>val;
   l1.push_back(val);
   la.push_back(val);
  }
  cin>>k2;
  while(k2--)
  {cin>>val;
   l2.push_back(val);
    lb.push_back(val);
  }
  
   ll w=0,f=0;
  while(1)
  {  
     if(l1.empty())
       {w=2; break;}
     else if(l2.empty())  
       {w=1; break;} 
     else if(f>(106))
       {w=-1;break;}  
      
     ll v1=l1.front();
     l1.pop_front();
     ll v2=l2.front(); 
     l2.pop_front();
     if(v1>v2)
       {l1.push_back(v2);l1.push_back(v1);}
     else if(v2>v1)
       {l2.push_back(v1);l2.push_back(v2);}

    f++; 
  }  
 
  if(w==-1)
  cout<<"-1"<<endl;
  else
  cout<<f<<" "<<w<<endl;
  return 0;  
}
