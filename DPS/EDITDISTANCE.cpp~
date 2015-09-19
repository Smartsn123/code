#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)


int EDITDIS(string s1,string s2)
{  int l1=s1.length(), l2=s2.length();

   ll dp[l1+2][l2+2];

   loop(i,0,l1+1)
    {
          loop(j,0,l2+1)
         {
              if(i==0 || j==0)
                dp[i][j]=max(i,j);
              else
                {  
                   dp[i][j]=min(I+dp[i][j-1],D+dp[i-1][j])
                    if(s1[i]!=s2[j])
                   dp[i][j]=min(dp[i][j],R+dp[i-1][j-1]);
                }
         }          
    }

  

  return  dp[l1][l2];
}

int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;

  cout<<EDITDIS(s1,s2)<<endl;


  return 0;
  
 
}
