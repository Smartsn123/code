//Written by Sunny Singh IPG_2012086 ABV-IIITM Gwalior 
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
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000006

char inp[MAXL];
ll fq[27],n,k;

int main()
{ fastinput;
  
   cin>>n>>k;
   cin.ignore();
   cin>>inp;
   //cout<<inp<<endl;

   loop(i,0,n)
    fq[int(inp[i])-'A']++;

   sort(fq,fq+26);
   ll sc=0;
   loopr(i,25,0)
   {
         if(k==0)
          break;
        
         sc+= min(fq[i],k)*min(fq[i],k);
         k-=min(fq[i],k);
   }

  cout<<sc<<endl;
  return 0;
}
