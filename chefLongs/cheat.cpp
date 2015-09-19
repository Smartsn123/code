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


int main()
{
   long double a=1,v=0.5999;
    int ct=0;
   loop(i,0,10000)
    { a*=v;
      if(a<0.000001)
      {a*=100000;ct++;}    
   }
    cout<<ct<<endl;
    printf("%.12Lf\n",a);
   a=a/pow(100000.0,ct) ;
   if(a==0)
   cout<<"yes"<<endl;

   printf("%.12Lf\n",a);
   return 0;
}
