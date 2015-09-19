#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 3000006


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


ll dp[300002][502]
ll arr[MAXL];
ll t,L,R,q,n;
int main()
{   fastinput;
     cin>>n;
     loop(i,1,n+1)
      in(arr[i]);

   loop(j,1,501)
     {
         for(int i=1;i<=(n-i);i++)
           {
                  
           }
     }

   cin>>q;
    while(q--)
    {
        in(L);in(R);
       ll sum=0;
       if(L>n )
         printf("%lld\n",0);
       else if(R>0)
       {
         for(ll i=0;(L+(i*R))<=(n);i++)
           sum+=arr[L+(i*R)];

        printf("%lld\n",sum);
       }
         else if(R<0)
       {
          for(ll i=0;(L+(i*R))>=1;i++)
           sum+=arr[L+(i*R)];

          printf("%lld\n",sum);
       }
       else if(R==0)
           printf("%lld\n",arr[L]*n);
      
     }
    
    
 
  return 0;
}

