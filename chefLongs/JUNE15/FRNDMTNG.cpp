#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define ull long long int
#define mod 1000000000



long double prob(long double T1,long double T2,long double t1,long double t2)
{
   if(t1>=T2)
    return 1;
   if(T1>=(T2-t1))
   {
      long double a=(T2-t1)*(T2-t1);
      a=a/2;
      long double b=(T1-T2+t1)*(T2-t1);
      long double c = T1*t1;

      return ((a+b+c)/(T1*T2));
   }
   
   else if(T1<(T2-t1))
   {
      long double a=T1*T1;
      a=a/2;
      long double b=T1*t1;

      return ((a+b)/(T1*T2));
   }

  
}


int main()
{
  ull t;
  in(t);
  while(t--)
  {
    long double T1,T2,t1,t2,ans1=0,ans2=0;
     scanf("%Lf %Lf %Lf %Lf",&T1,&T2,&t1,&t2);
 
    ans1=prob(T1,T2,t1,t2);
    //cout<<ans1<<endl;
    ans2=1-prob(T2,T1,t2,t1);
    //cout<<ans2<<endl;

    printf("%Lf\n",(ans1-ans2));
    
  }
  return 0;
}
