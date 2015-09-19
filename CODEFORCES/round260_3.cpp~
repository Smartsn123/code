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
#define MAXL 100005

ll arr[1000006];
ll feq[1000006];
ll maxscore[1000006];

ll n,val;




int main()
{
  cin>>n;
  int maxm=-1;
  loop(i,0,n)
  { cin>>val;
    feq[val]++; 
    maxm=max(maxm,val); 
  }

  loop(i,1,maxm+1)
  {    if(i>=2)
       maxscore[i]=max(maxscore[i-2]+i*feq[i],maxscore[i-1]); 
       else
       maxscore[i]=i*feq[i]; 
  }
  cout<<maxscore[maxm]<<endl;
  return 0;
}
