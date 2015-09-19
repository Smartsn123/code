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

ll arr[1000006];
ll n;


int main()
{
   in(n);
   string st;
   cin.ignore();
   cin>>st;
   //cout<<st<<endl;
   ll ans1=0,ans2=0;
   loop(i,0,n)
    {
       if(st[i]=='0')
        ans1++;
       else
        ans2++;
         
    }
   
   //cout<<min(ans1,ans2);br;
   ll ans=2*min(ans1,ans2);
   ans=n-ans;
    cout<<ans<<endl;  
}
