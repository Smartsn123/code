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
char arr[MAXL];
int arr[27];
ll n,p,f;
bool is_palin[1001][1001];

void make()
{
   loop(i,0,n)
    {
       loop(j,i,n)
       {
           if(i==j)
             is_palin[i][j]=1;
           else if(j==i+1)
             is_palin[i][j]=(arr[i]==arr[j]);
           else if(arr[i]==arr[j] && is_palin[i-1][j-1])  
             is_palin[i][j]=1;
           else
              is_palin[i][j]=0;
       }
    }
}
bool f1=0;
int main()
{  
  fastinput;
  cin>>n>>p;
   make();
  cin.ignore();
  cin>>arr;
  ll indx=-1;
  loopr(i,n-1,0)
  {   f1=0;
      if((arr[i]-'a')<(p-1) )
       { char tmp=char(arr[i]-'a'+1)
         loopr(j,i-1,0)
          {  if(j==i-1 &&arr[j]==tmp )
              {f1=1; break;
            else if(arr[j]==tmp && is_palin[j+1][i-1])
             {f1=1; break;}
          }

         loop(j,i+1,n)
          {  if(j==i+1 &&arr[j]==tmp )
              {f1=1; break}
             else if(arr[j]==tmp && is_palin[i+1][j-1])
             {f1=1; break;}
          }

         if(f1==0)
         {indx=i;   break;}
          
       }
  }


  if(f1==0)
   {  arr[indx]=char(arr[indx]-'a'+1);
      cout<<arr<<endl;
   }
  else
   cout<<"NO\n";


   
   

return 0;
}
