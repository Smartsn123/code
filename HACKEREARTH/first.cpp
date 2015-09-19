#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mapiterate(it,mapname)  for(it=mapname.begin();it!=mapname.end();++it)

int main()
{
   string str;
   cin>>str;
   map<string,int> mymap;
   int l=str.length();
   string ins="";
   loop(i,0,l+1)
    {    
         loop(j,int('a'),int('z')+1) 
           { if(i!=0 && i!=l)
             ins=str.substr(0,i)+char(j)+str.substr(i,l-i); 
             else if(i==0)  
             ins=char(j)+str.substr(0,l);
             else if(i==l)
             ins=str.substr(0,l)+char(j);
             //cout<<ins<<endl;
             mymap[ins]++;
           }   
    }
  
   
   
   cout<<mymap.size()<<endl;;
   
   
   
   return 0;
}
