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
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)

ll area1,area2,area3;
ll l1,l2,l3,r1,r2,r3;
ll la,lb,lc,ra,rb,rc;
ll n;


int main()
{
   cin>>l1>>r1>>l2>>r2>>l3>>r3;
   
   area1=l1*r1;
   area2=l2*r2;
   area3=l3*r3;

   la=max(l1,r1);
   ra=min(l1,r1);
   
   lb=max(l2,r2);
   rb=min(l2,r2);

   lc=max(l3,r3);
   rc=min(l3,r3);
   
   
   ll maxarea=area2+area3;
   bool res1=0,res2=0;
   if(maxarea<=area1)
    res1=1;
   
   if((rb+rc) <= ra &&  max(lb,lc)<=la )
    res2=1;

   if( max(rc,rb)<=ra && (lc+lb)<=la)  
    res2=1;

   if((lb+rc)<=la && max(rb,lc)<= ra)
    res2=1;
   if((lc+rb)<=la && max(rc,lb)<= ra)
    res2=1;
  
 
   
  if(res1 && res2)
   cout<<"Yes\n";

  else
   cout<<"No\n";
   

  return 0;  
}
