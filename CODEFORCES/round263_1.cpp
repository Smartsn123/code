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
ll n,m;

int main()
{ fastinput;
  cin>>n;
  char mat[103][103];

  loop(i,0,n)
  { loop(j,0,n)
     cin>>mat[i][j];
  }

  ll flag=1;

   loop(i,0,n)
  { loop(j,0,n)
      {  ll ct=0;
         
           if(i>0 && mat[i-1][j]=='o')
              ct++;
           if(i<(n-1) && mat[i+1][j]=='o')
             ct++;
           if(j>0 && mat[i][j-1]=='o')
              ct++;
           if(j<(n-1) && mat[i][j+1]=='o')
             ct++;
          

         if(ct%2==1)
           {flag=0;break;}

      }
       if(flag==0)
         break;
  }

   if(flag)
     cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
 return 0;  
}
