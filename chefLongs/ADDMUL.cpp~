#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mapiterate(it,mapname)  for(it=mapname.begin();it!=mapname.end();++it)
#define LEN 300000

 

ll l[LEN];
ll r[LEN];
ll val[LEN];


ll sums[LEN];
ll arr[LEN];
ll lazyinc[LEN];
ll lazymul[LEN];
 
ll  maketre(ll ind,ll a,ll b)
{ 
  
  l[ind]=a;
  r[ind]=b;
  ll mid=a+((b-a)/2);
 
  if(a==b)
    val[ind]=arr[a]%mod;
  else
   val[ind]=(maketre(2*ind+1,a,mid)+maketre(2*ind+2,mid+1,b))%mod;
    
   return val[ind]%mod;
   
 // cout<<"creating node "<<ind<<"--"<<a<<" , "<<b<<" : "<<val[ind]<<endl;
    
}
 
 
void checklazy(ll ind)
{
   ll a=l[ind];
   ll b=r[ind];
   
   if(lazyinc[ind] != 0 || lazymul[ind] !=1) 
               { 
                    val[ind]= (val[ind]*lazymul[ind])%mod+((b-a+1)*lazyinc[ind])%mod;
                    val[ind]%=mod;
                     //cout<<"set value of "<<ind<<" node to "<<val[ind]<<endl;
		    if(a != b) 
                       {
                         
                             lazymul[2*ind+1]=(lazymul[2*ind+1]*lazymul[ind])%mod;;
                             lazymul[2*ind+2]=(lazymul[2*ind+2]*lazymul[ind])%mod;
                             lazyinc[2*ind+1]= ((lazyinc[2*ind+1]*lazymul[ind])+lazyinc[ind])%mod;
                             lazyinc[2*ind+2]= ((lazyinc[2*ind+2]*lazymul[ind])+lazyinc[ind])%mod;
                        
                          //  cout<<"updated LAZYinc "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazyinc[2*ind+1]<<"and"<<lazyinc[2*ind+2]<<endl;
                          //  cout<<"updated LAZYMul "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazymul[2*ind+1]<<"and"<<lazymul[2*ind+2]<<endl;
		       }
 
		lazyinc[ind] =0;
                lazymul[ind] =1; // Reset it
	}
}
 

 
ll findfunc(ll sl,ll sr,ll ind)
{
  int a=l[ind];
  int b=r[ind];
  
  if(a >sr || b<sl)
   return 0;
  checklazy(ind);
  if(a>=sl && b<=sr)
    return  val[ind]%mod;
 
  else
   return (findfunc(sl,sr,2*ind+1)+ findfunc(sl,sr,2*ind+2))%mod ;
   
}
 
///////////////////////////////////////////////////////////////////////updation type 1
void update(ll ul,ll ur,ll ind,ll v,ll upd)
{
   ll a=l[ind];
   ll b=r[ind];
   checklazy(ind);
   if(a >ur || b<ul)
      return;
   if(a >= ul && b<=ur)
   {  
      if(upd==1)
      {
         val[ind]=(val[ind]+((b-a+1)*v))%mod;
           // cout<<"made value of "<<ind<<" node to "<<val[ind]<<endl;
          if(a!=b)
          {    
              lazyinc[2*ind+1]=(lazyinc[2*ind+1]+v)%mod;
              lazyinc[2*ind+2]=(lazyinc[2*ind+2]+v)%mod;
              // cout<<"updated LAZYinc "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazyinc[2*ind+1]<<"and"<<lazyinc[2*ind+2]<<endl;
           }
           return ;
       }

       else if(upd==2)
       {  
     
           val[ind]=(val[ind]*v)%mod;
           // cout<<"made value of "<<ind<<" node to "<<val[ind]<<endl;
           if(a!=b)
            {    
              
              lazyinc[2*ind+1]=(lazyinc[2*ind+1]*v)%mod;
              lazyinc[2*ind+2]=(lazyinc[2*ind+2]*v)%mod;
              lazymul[2*ind+1]=(lazymul[2*ind+1]*v)%mod;
              lazymul[2*ind+2]=(lazymul[2*ind+2]*v)%mod;
             //  cout<<"updated LAZYinc "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazyinc[2*ind+1]<<"and"<<lazyinc[2*ind+2]<<endl;
             // cout<<"updated LAZYMul "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazymul[2*ind+1]<<"and"<<lazymul[2*ind+2]<<endl;
              }
          return ;
        }

         else if(upd==3)
         {  
     
               val[ind]=((b-a+1)*v)%mod;
                 // cout<<"made value of "<<ind<<" node to "<<val[ind]<<endl;
               if(a!=b)
                {    
              
                  lazymul[2*ind+1]=0;
                  lazymul[2*ind+2]=0;
                   lazyinc[2*ind+1]=v;
                   lazyinc[2*ind+2]=v;
                  //   cout<<"updated LAZYinc "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazyinc[2*ind+1]<<"and"<<lazyinc[2*ind+2]<<endl;
                  //    cout<<"updated LAZYMul "<<2*ind+1<<"and"<<2*ind+2<<" to"<<lazymul[2*ind+1]<<"and"<<lazymul[2*ind+2]<<endl;
                  }
             return ;
          }
    
       
   }
        update(ul,ur,2*ind+1,v,upd);
        update(ul,ur,2*ind+2,v,upd);
        val[ind]=(val[2*ind+1]+val[2*ind+2])%mod;
}
///////////////////////////////////////////////////////////////////////updation type 2
 
 
int main()
{ fastinput;
  
  ll n,q;
  cin>>n>>q;
  arrin(arr,n);
  //sums[0]=arr[0];
 // loop(i,1,n) 
  // sums[i]=(sums[i-1]+arr[i]);
  loop(i,0,300000)
   lazymul[i]=1;
  maketre(0,0,n-1);
 
  while(q--)
  {
     int o,x,y,v;
     cin>>o>>x>>y;
      if(o==4)
       { cout<<findfunc(x-1,y-1,0)<<endl;}
      else 
       {   cin>>v;
           update(x-1,y-1,0,v,o);
       }
    
   }
 
 return 0; 
} 
