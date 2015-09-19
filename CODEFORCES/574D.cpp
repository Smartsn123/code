
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
ll res[MAXL];
ll n;
ll l[MAXL];
ll r[MAXL];
ll val[MAXL];

ll  maketre(ll ind,ll a,ll b)
{ 
  
  l[ind]=a;
  r[ind]=b;
  ll mid=a+((b-a)/2);
 
  if(a==b)
    val[ind]=arr[a];
  else
  { maketre(2*ind+1,a,mid);
    maketre(2*ind+1,mid+1,b);
    val[ind]=max(val[2*ind+1],val[2*ind+2]);
  }
    
   
 // cout<<"creating node "<<ind<<"--"<<a<<" , "<<b<<" : "<<val[ind]<<endl;  
}

 
ll findfunc(ll sl,ll sr,ll ind)
{
  int a=l[ind];
  int b=r[ind];
  
  if(a >sr || b<sl)
   return 0;
  if(a>=sl && b<=sr)
    return  val[ind];
 
  else
   return max(findfunc(sl,sr,2*ind+1),findfunc(sl,sr,2*ind+2)) ;
   
}

 

int main()
{ fastinput;
  
  cin>>n;
  arrin(arr,arr+n);
  
  ll mm;
  loop(i,1,n)
  {
     arr[i]=0; arr[n-i-1]=0;
     mm =findfunc(i,n-i-1,0);
     if((mm-i)<0)
      { f=1;break;}
  }
   
  
  return 0;    
   
}
