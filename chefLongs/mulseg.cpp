#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
map<string,ll> mymap;
char stackw[100];
ll len;
char inp[100];
string neww;
void count(ll ind1,ll ind2,ll &wordcount, ll & samecount,ll stop)
{
   if(ind1==len && stop==len)
   {  bool f=0;
      loop(i,0,len)
      { if(neww[i]!=inp[i])
         { f=1;break;}
      }
      neww[len]='\0';
     if(ind2==)
     mymap[neww]+=1;
      cout<<neww<<endl;
      if(f==0)
       samecount++;
      wordcount++;
    return;         
   }
  //either pushing into stack from word
  if(ind1!=len)
   { 
     stackw[stop-1]=inp[ind1];
     count(ind1+1,ind2,wordcount, samecount,stop-1);
     
   }
   
 //or poping from stack 
  if(stop!=len)
  {  neww[ind2]=stackw[stop];
     count(ind1,ind2+1,wordcount, samecount,stop+1);
  }
    
}

int main()
{fastinput;
 cin>>inp;
 len=strlen(inp);
 ll ans1=0,ans2=0;
  string neww;
 count(0,0,ans1, ans2,len,neww);
  ans1=0;
 
 cout<<ans2<<" "<<mymap.size()<<endl;

  return 0;
 }

