 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 100005


ll ql[1000006];

ll n,ind,v;


int main()
{
  cin>>n;
  loop(i,0,n)
   { 
      cin>>ind>>v;
      ql[ind]=v;
   }
   int flag=0;
    int prev=ql[0];
   loop(i,1,MAXL)
   {
     if(ql[i]!=0 && ql[i]<prev)
       { flag=1;break;}
     else if(ql[i]!=0 )
       prev=ql[i];
   }

  if(flag)
  cout<<"Happy Alex\n";
  else
   cout<<"Poor Alex\n";
  return 0;
}
