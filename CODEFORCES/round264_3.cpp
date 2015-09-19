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
ll mat[2002][2002];
ll ldp[2002][2002];
ll rdp[2002][2002];
ll res[2002][2002];
ll n;
int main()
{ fastinput;
  
  cin>>n;

   loop(i,0,n)
   {
      loop(j,0,n)
         cin>>mat[i][j];
   }
  br;
   loop(i,0,n)
   {
      loop(j,0,n)
         {
             if(i==0 || j==0)
              ldp[i][j]=mat[i][j];
             else
              ldp[i][j]=mat[i][j]+ldp[i-1][j-1];            
              
             cout<<ldp[i][j]<<" ";
         }
        br;
   }
   br;
  loop(i,0,n)
   {
      loop(j,0,n)
         {
             if(i==0 || j==n-1)
              rdp[i][j]=mat[i][j];
             else
              rdp[i][j]=mat[i][j]+rdp[i-1][j+1]; 
             
               cout<<rdp[i][j]<<" ";      
              
         }
         br;
   }
  ll x1=0,y1=0,arr1[2*n],arr2[2*n];
  loop(i,0,n)
     arr1[x1++]=ldp[i][n-1];
  loopr(i,n-2,0)
     arr1[x1++]=ldp[n-1][i];
  

  loop(i,0,n)
     arr2[y1++]=rdp[i][0];
  loop(i,1,n)
     arr2[y1++]=rdp[n-1][i];


  ll maxm=INT_MIN,a1=-1,a2=-1,y1,b1=-1,b2=-1,ans=0;
  loop(i,0,x1)
   {
         if(maxm<arr1[i])
         {maxm=arr1[i];   a1=i; }
   }
  ans+=maxm;
  arr1[a1]=-1;
  maxm=INT_MIN;
  loop(i,0,x1)
   {
         if(maxm<arr1[i])
         {maxm=arr1[i];   b1=i; }
   }
  ans+=maxm;
  maxm=INT_MIN;

  loop(i,0,y1)
   {
         if(maxm<arr2[i])
         {maxm=arr2[i];   a2=i; }
   }
  ans+=maxm;
  arr2[a2]=-1;
  maxm=INT_MIN;
  loop(i,0,y1)
   {
         if(maxm<arr2[i])
         {maxm=arr2[i];   b2=i; }
   }
  ans+=maxm;

  
  cout<<ans<<endl;
  
  
  
 return 0;   
}
