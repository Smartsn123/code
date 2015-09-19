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
#define Pair pair<int,int>
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
int inmat[65][65];
int mat[65][65];
int cmat[65][65];
float K[20002];
bool col[20002];
ll x[20002];
ll y[20002];
ll n,k;
ll ct;
ll clst( int  a, int b)
{  float mini=INT_MAX;
   int min_i=0;
   loop(i,1,k+1)
   {   float dis=abs(a-x[i])+abs(b-y[i])/K[i];
       if(col[i]==0 &&  mini>dis)
        { mini=dis;  min_i=i;}
   }
   col[min_i]=1;
    return min_i;
}

 
 
int main()
{fastinput;
  int t;
  cin>>t;
  while(t--)
  {   
      
      cin>>n>>k;
      loop(i,0,n)
         { 
           loop(j,0,n)
           { cin>>inmat[i][j];
             cmat[i][j]=0; mat[i][j]=0;
             x[inmat[i][j]]=i; y[inmat[i][j]]=j;}
           
         }
        float a=0; float b=0,diva=0,divb=0;
     loop(i,1,k+1)
     { cin>>K[i]; diva+=K[i]; col[i]=0;}
 
    loop(i,1,k+1)
    {  a+=float(x[i])*(float(K[i])/diva) ;
       b+=float(y[i])*(float(K[i])/diva) ;    
    }
   // a=a/(diva*k);
   // b=b/(diva*k);
    int meana=int(a);
    int meanb=int(b);
 
    //cout<<meana<<" : "<<meanb<<endl;
      ct=0;
    // regiongrow(meana,meanb);
   
    loop(d,0,n)
    {
       loopr(b,meana+d,meana-d)
         {  loopr(a,meanb+d,meanb-d)
               {
                   if(a>=0 && a<n && b>=0 && b<n )
                    {  if(cmat[a][b]!=1)
                        {
                          mat[a][b]=clst(a,b); cmat[a][b]=1;ct++;
                        }
                    }
                  if(ct==k)
                      break;                    
               }
            if(ct==k)
                      break;
         }
        if(ct==k)
                      break;
    }
    
    
   loop(i,0,n)
   {
      loop(j,0,n)
        {cout<<mat[i][j]<<" ";
        cout<<endl;
   }
  }
  return 0;
}
 
