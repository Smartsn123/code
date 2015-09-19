#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  scanf("%lld",&a)
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll  typ;
double prob[50005];
double rg[50005];
double vis[50005];
double W;
vector< vector<char> > maze;
 vector< vector<int> > col;
ll R,C,ct;

void dfs(int i, int j)
{    //cout<<"Here1"<<endl;
      ct++;
     col[i][j]=1;
     if(i>0 && col[i-1][j]!=1)
      dfs(i-1,j);
     if(j>0 && col[i][j-1]!=1)
      dfs(i,j-1);
     if(i< R-1 && col[i+1][j]!=1)
      dfs(i+1,j);
     if(j < C-1 && col[i][j+1]!=1 )
      dfs(i,j+1);
     
}

int main()
{  ll t;
   in(t);
  while(t--)
  {   
      in(R); in(C);
      maze.resize(R+2);
      col.resize(R+2);
      loop(i,0,R)
       {  scanf(" ");
          maze[i].resize(C+2);
          col[i].resize(C+2);
          loop(j,0,C)
           {  scanf("%c",&maze[i][j]);
               if(maze[i][j]=='#')
                col[i][j]=1; 
               else
                col[i][j]=0;
               
           }
       }
       typ=0;
      loop(i,0,R)
       {   
          loop(j,0,C)
           {  if(col[i][j]==0)
               {  ct=0;
                  dfs(i,j);
                  rg[typ]=ct;
                  typ++;  
                                
               }
           }
       }

       double num=1,ans=1;
      loop(i,1,typ)
         ans+=rg[i]/(rg[0]+rg[i]);
      
      
       
        
        printf("%0.12lf\n",ans);
        
        
   }
return 0;
}


