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
#define A 1000000000

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double p,amt,amt1,amt2,m;
int main()
{  int t;
   cin>>t;
  while(t--)
  {
     
     cin>>m>>p;
     amt=A;
     amt1=A*p;
     amt2=A*pow(p,2);
      if(m==1)
         printf("1000000000.00 0.00\n");
     else if(m==2)
       printf("%lf %lf\n",amt-amt1,amt1);
     else if(m==3)
     {    //cout<<"here"<<endl;
           //if(amt2 >= amt/2)
            // printf("%lf %lf\n",amt2,amt-amt2);
         // else
             printf("%lf %lf\n",amt-amt1+amt2,amt1-amt2);
              
      }
    
  }
  return 0;
}

