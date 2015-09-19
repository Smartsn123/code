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
 
double prob[50005];
double rg[50005];
double W;
double solve(vector< vector<bool> > & col);
 
ll R,C,ct;
 
void dfs(int i, int j ,vector< vector<bool> > & col)
{    //cout<<"Here1"<<endl;
     col[i][j]=1;
     if(i>0 && col[i-1][j]!=1)
      dfs(i-1,j,col);
     if(j>0 && col[i][j-1]!=1)
      dfs(i,j-1,col);
     if(i< R-1 && col[i+1][j]!=1)
      dfs(i+1,j,col);
     if(j < C-1 && col[i][j+1]!=1 )
      dfs(i,j+1,col);
     
}
 
int main()
{  ll t;
   in(t);
  while(t--)
  {   vector< vector<char> > maze;
      vector< vector<bool> > col;
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
        
        printf("%0.12lf\n",solve(col));
        
        
   }
return 0;
}
 
double solve(vector< vector<bool> >  & col)
{      // cout<<"Here"<<endl;
	int wc = 0;
         // count the total no of  white cells left now
	loop(i,0,R)
                {
		        loop(j,0,C)
                        {
			if(col[i][j] == 0)
                         wc++;
                        }
		}
	
	if(wc==0)// if no cell to click ,return
	 return 0;
	
	double res = 0;
        // goto each clickable cell apply dfs and check if dest. is reachable
	loop(i,0,R)
        {
		  loop(j,0,C)
                   {
		     if(col[i][j] == 0)
                     {
			vector < vector < bool > > coltmp;
                        coltmp.resize(R+2);
                        coltmp.resize(C+2);
			coltmp = col;
			dfs(i,j,coltmp);
                        // if the destination is rechable update count by one
                        if(coltmp[R-1][C-1] == 1)
                        res++;
                        // else 1 + expectation after coloring this region
			else
			res += 1 + solve(coltmp);
				
		       }
		  }
	}
        // find the expectation and return
	res /= wc;
	return res;
} 

/*
basically choose a point , start a bfs/dfs from there to mark nodes red ,
 and if n,m is reachable then add 0 to answer else 
add 1 + solve(new matrix) to answer where new matrix 
is the matrix after marking red cells
and divide the ans by the number of cells clicked
*/
