#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  scanf("%d",&a)
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
#define MAXL 1000006
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
double  mat[2][2]={{-1.0352761804100827 ,3.863703305156273},{3.863703305156273 ,1.0352761804100827}};

long long int ind,k,s;
double  res[2][2],ak,bk,mul,ans,ai,bi;
 
 
int main()
{  
   
     scanf("%lld %lld %lld",&ind,&k,&s); 
     scanf("%lf %lf",&ai,&bi); 
      
      if(k >= ind)
         { ll dif=k-ind;
           ll fc=dif-(dif%2);
           s-=(2*fc);
          
           if(dif%2)
           {
           ak=(ai*mat[0][0]+bi*mat[0][1]);
           bk=(ai*mat[1][0]+bi*mat[1][1]);
           }
           else
             {ak=ai;bk=bi;} 
         }
      else
          {
              ll dif=ind-k;
              ll fc=dif-(dif%2);
              s+=(4*dif)-(2*fc);
              if(dif%2)
               {
                ak=(ai*mat[0][0]+bi*mat[0][1]);
                bk=(ai*mat[1][0]+bi*mat[1][1]);
               }
              else
               {ak=ai;bk=bi;};     
          }
     // ans=(ak+bk)*mul;
      
     ans=exp(log(ak+bk)- double(s)*log(2));
     printf("%lf\n",ans);
      
  
  return 0;
}

