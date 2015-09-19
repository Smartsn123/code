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
ll minc[MAXL],staying[MAXL],n,id;
char sign;
bool status[MAXL];

int main()
{ fastinput;

  cin>>n;
  ll maxm=INT_MIN;
  bool f=0;
  loop(i,0,n)
  {
     cin.ignore();
     cin>>sign;
     cin>>id;
     //cout<<sign<<" "<<id<<endl;
     
     
     if(sign=='+')
     {  status[id]=1;
         if(i==0)
          staying[i]=1;
         else
          staying[i]=staying[i-1]+1;   
     }
     else
    { if(status[id]==1)
         {staying[i]=staying[i-1]+1;}
      else
         {
             loopr(r,i-1,0)
               minc[r]+=1;
             minc[i]=1;
         }
    }
      
    
  }

  
  
  loop(i,0,n)
   {cout<<minc[i]<<" "<<staying[i]<<endl;
     maxm=max(maxm,staying[i]+minc[i]);
   }
  cout<<maxm<<endl;
  
 return 0;  
}
