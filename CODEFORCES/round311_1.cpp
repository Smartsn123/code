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
#define mapiter(it,mymap) for(it=mymap.begin();it!=mymap.end();it++)

ll lens[100005];
ll c[100005];
ll arr[100005];
ll fq[100005];

ll n;

int Maximise()
{
  ll dp[100005][2];

  if(checkbal())
  return 0;

  dp[0][1]=c[0];
  dp[0][0]=0;
  int k=1;
  loop(i,1,n)
  {
     dp[i]
  }
}

int main()
{
   in(n);
   arrin(lens,n);
   arrin(c,n);
   ll max_len=0
   map<int,int> mympap;
   map<int,int>::iterator it;
   loop(i,0,n)
   { arr[lens[i]]+=c[i];
     mymap[lens[i]]+=c[i];
     fq[lens[i]]++;
     max_len=max(max_len,lens[i]);
   }
   
   loop(i,0,max_len+1)
    {
      if(fq[i]==0)
       arr[i]=INT_MAX;
    }

   ll minc=INT_MAX;

   mapiter(it,mymap)
    minc=min(minc,Maximise(it->first));
   
   
 
   
   
   
}
