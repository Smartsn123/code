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
ll arr[MAXL];
ll sum[MAXL];
ll n;
ll counts[MAXL];


int main()
{
   fastinput;
   cin>>n;
   
   arrin(arr,n);

   sum[0]=arr[0];
   loop(i,1,n)
    {sum[i]=sum[i-1]+arr[i];
      //cout<<sum[i]<<" ";
      }
      // br;
  ll ans=0;


  if(sum[n-1]%3==0 && n>=3)
  {  //cout<<"here"<<endl;
     counts[0]=(sum[0]%2==0 &&  sum[0]== (2*(sum[n-1]/3)));
     loop(i,1,n)
      {counts[i]=counts[i-1]+(sum[i]%2==0 &&  sum[i]== (2*(sum[n-1]/3)));
        //cout<<counts[i]<<" ";
      }
       //br;

     loop(i,0,n-2)
      {
          if(sum[i]==(sum[n-1]/3))
             ans+= (counts[n-2]-counts[i]);
            
      }

     cout<<ans<<endl;
   }
  else
   cout<<"0"<<endl;
   return 0;
}
