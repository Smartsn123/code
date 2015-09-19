#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(t,0,size) cin>>arr[t]
#define fastinput ios_base::sync_with_stdio(false)

ll arr[1000006];
ll cnt[1000006];
ll indi[1000006];
ll m;
ll n,k,ans;


int main()
{  
   in(n);in(k);
   loop(i,0,k)
    {  
       in(m);
       arrin(arr,m);
       if(arr[0]==1)
       { for(int j=1;j<m;j++)
         {  
             if(arr[j]-arr[j-1] >1 )
             { cnt[i]=m-j;
              // cout<<j<<"--";
                break;
              }
            
          }
        }
        else
         cnt[i]=m-1;     
      
       
       indi[i]=cnt[i]+1;
      // cout<<cnt[i]<<" "<<indi[i]<<endl;
       
        
    }
     
    ll indt=0,cntt=0;
    loop(i,0,k)
    {indt+=indi[i]; cntt+=cnt[i];}
     indt--;
    out(indt+cntt);
    br;
    return 0;
   
}
