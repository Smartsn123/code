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
#define mod 1000000007
ll arr1[30];
ll arr2[30];
ll sc=0,n,k,l;


ll LCS()
{
   ll i, j;
   
   ll lcs[30][30];
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=n; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         lcs[i][j] = 0;
  
       else if (arr1[i-1] == arr2[j-1])
         lcs[i][j] = lcs[i-1][j-1] + 1;
  
       else
         lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
     }
   }
    
   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   return lcs[n][n];
}
 

 
void make(ll ind )
{
 
   if(ind==n)
   {
        if(LCS()==l)
         { sc++; sc%=mod;}
           
       return ;
   }
   loop(i,1,k+1)
     {
        arr2[ind]=i;
        make(ind+1);
     }
}
 
 
int main()
{//fastinput;
  int t;
  cin>>t;
  while(t--)
  {  sc=0;
      
      scanf("%lld %lld %lld",&n,&k,&l);
      loop(i,0,n)
        scanf("%lld",&arr1[i]);
     
      make(0);
       printf("%lld\n",sc);
    
  }
  return 0;
}
 
