#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  scanf("%lld",&a)
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
#define MAXL 777778
 
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
ll x[MAXL],y[MAXL],z[MAXL];
ll n,q,A,B,C,D;
ll occdif[78][78][78];
vector<vector<double> > adj;
vector<vector<double> > adjd;
int main()
{
   in(n);in(q);
 
   loop(i,0,n)
    {in(x[i]); in(y[i]); in(z[i]);}
   
   
   
   while(q--)
   {    //cout<<"Here"<<endl;
       in(A);in(B);in(C);in(D);
      double sum=0,c=0;
    
      loop(i,0,n)
      {   
         cout<<i<<"---"<<endl;
         loop(j,i+1,n)
           {  
                 double val= A*(x[i]-x[j])+B*(y[i]-y[j])+C*(z[i]-z[j]);
                 val=2*max(abs(val),abs(D));
                
                 
                 double div= sqrt( pow(x[i]-x[j],4)+pow(y[i]-y[j],4)+pow(z[i]-z[j],4) );
                   
                 div*=n*(n-1);
                 cout<<val<<"/"<<div<<" ";
                 double inpi=val/div;
                 double y = inpi - c  ;   // So far, so good: c is zero.
                 double t = sum + y ;         // Alas, sum is big, y small, so low-order digits of y are lost.
                 c = (t - sum) - y ;       // (t - sum) recovers the high-order part of y; subtracting y recovers -(low part of y)
                 sum = t;
                  
           }
           br;
      }

       
     printf("%0.15lf\n",sum);
     }
 
     
     return 0; 
 }
 
