#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)

#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)


int LCS(string s1,string s2)
{
  int l1=s1.length();
  int l2=s2.length();
  int lcs[l1+2][l2+2];

  loop(i,0,l1+1)
  {
     loop(i,0,l2+1)
     {
         if(i==0 || j==0)
          lcs[i][j]=0;
         else
            {   if(s1[i]!=s2[j])
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                else
                lcs[i][j]=max(lcs[i][j],1+lcs[i-1][j-1]);
            }
     }
  }

  return lcs[l1][l2];
}

int main()
{
   string s1,s2;
   cin>>s1>>s2;
   cout<<LCS(s1,s2)<<endl;
   
     
}
