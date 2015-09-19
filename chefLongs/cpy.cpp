#include<bits/stdc++.h>
using namespace std;
#define ll   int
#define in(a)  cin>>a
#define out(a) cout<<a
#define br prllf("\n")
#define loop(i,k,n) for(ll i=k;i<n;i++)
#define loopr(i,k,n) for(ll i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) scanf("%d",&arrname[i])
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define B 32
#define MAXL 1000005

ll x[MAXL],y[MAXL];
 
int main() 
{
	ll t;
scanf("%d",&t);
while(t--)
{
ll n;
scanf("%d",&n);


ll xmin=0,ymin =0,xmax =0,ymax =0;

loop(i,1,n+1)
{
scanf("%d %d",&x[i],&y[i]);
}
loop(i,1,n+1)
{
if(x[xmin]>x[i])
xmin=i;
if(x[xmax ]<x[i])
xmax =i;
if(y[ymax ]<y[i])
ymax =i;
if(y[ymin ]>y[i])
ymin =i;
}


if(y[xmax ]==y[ymax ])
{
printf("1\n");
printf("%d SW\n",xmax );
}

else if(x[xmin]==x[ymin ])
{
printf("1\n");
printf("%d NE\n",xmin);
}

else 
{
if(y[xmin]<y[xmax ]){
printf("2\n");
printf("%d SW\n",xmax );
printf("%d NE\n",xmin);
}
else{
printf("2\n");
printf("%d SW\n",xmax );
printf("%d  NE\n",xmin);
}}
 
}
	return 0;
}
