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
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)

ll arr[1000006];
ll n;


int main()
{
   in(n);
   loop(i,0,n)
   {// cout<<i<<" : ";
     loop(j,0,n)
       {if(j>=abs(n/2 -i) && j<=n/2 + ( i>(n/2)?n-i-1:i))
           cout<<"D";
          else
           cout<<"*";
        
       }
     cout<<endl;
    }

  return 0;
   
}
