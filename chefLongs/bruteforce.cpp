#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mapiterate(it,mapname)  for(it=mapname.begin();it!=mapname.end();++it)
#define LEN 300000


ll arr[LEN];

ll findfunc(int x,int y,int z)
{
  ll sum=0;
  loop(i,x,y+1)
   sum =(sum+arr[i])%mod;
  return sum;
}

void updateInc(int x,int y,int z,int v)
{
  
  loop(i,x,y+1)
   arr[i]=(arr[i]+v)%mod;
 
}

void updateMul(int x,int y,int z,int v)
{
 
  loop(i,x,y+1)
   arr[i]=(arr[i]*v)%mod;
 
}

void updateRp(int x,int y,int z,int v)
{
 
  loop(i,x,y+1)
   arr[i]=v;
 
}


int main()
{ fastinput;
  
  ll n,q;
  cin>>n>>q;
  arrin(arr,n);
 
 
  while(q--)
  {
     int o,x,y,v;
     cin>>o>>x>>y;
      if(o==4)
       { cout<<findfunc(x-1,y-1,0)<<endl;}
      else if(o==1)
       {   cin>>v;
           updateInc(x-1,y-1,0,v);
       }
      else if(o==2)
       {   cin>>v;
           updateMul(x-1,y-1,0,v);
       }
      else 
        { cin>>v;   updateRp(x-1,y-1,0,v);}
 
 
        //   loop(i,0,n)
        //    cout<<arr[i]<<" ";
        ///   cout<<endl;
       
     
    
  }
 
 return 0; 
} 
