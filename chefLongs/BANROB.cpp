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
int t,m;
double ch,frn,p,am;

int main()
{
	
	in(t);
	while(t--)
        {
          cin>>m>>p;
          if(m%2)
          {
          ch=A*(1+pow(p,m));
          ch/=(1+p);

          frn=A*p*(1-pow(p,m-1));
          frn/=(1+p);
           }
          else
           {
          ch=A*(1-pow(p,m));
          ch/=(1+p);

          frn=A*p*(1+pow(p,m-1));
          frn/=(1+p);
           }
          
          printf("%lf %lf   %lf\n",ch,frn,ch+frn);
    }
	return 0;
  
    
  }




