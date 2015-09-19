#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)



int main()
{fastinput;
  int t;
  cin>>t;
  while(t--)
  {
     cin.ignore();
     string st[2];
     cin>>st[0];
     cin>>st[1];
     ll n=st[0].length();
     bool cur=0;
     ll cst=0,cst1=0;


     loop(i,0,n)
      {   if(st[0][i]=='#' && st[1][i]=='#')
           {cst=-1;break;}
          else if(st[cur][i]=='#')
           {if(i!=0)
             cst+=1;
            cur=!cur;
           }
          
      }  

    cur=1;
    loop(i,0,n)
      {   if(st[0][i]=='#' && st[1][i]=='#')
           {cst1=-1;break;}
          else if(st[cur][i]=='#')
           {if(i!=0)
             cst1+=1;
            cur=!cur;
           }
          
      }  
     
   if(cst==-1 && cst1==-1)
     cout<<"No"<<endl;
   else
     cout<<"Yes\n"<<min(cst1,cst)<<endl;
       
    
  }
  return 0;
}
