#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define in(a)  cin>>a
#define out(a) cout<<a
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)

int mat[55][55];
int score[3000];
int col[3000];
int par[3000];
int n;


void dij(int ind,bool p)
{
   col[ind]=1;
   int max_s=0;
   int max_i=-1;
   // update the scores at all the neighbours ans find neighbour with highest score
   loop(i,1,n+1)
   { if(mat[ind][i]!=0 && col[i]!=1)
     {   if(p==0)
          {score[i]=max(score[i],score[ind]+mat[ind][i]); par[i]=ind;}
         else if(p==1)
          {score[i]=max(score[i],score[ind]-mat[ind][i]);par[i]=ind;}
       
     }
      
      if(col[i]!=1 && score[i]<max_s)
      { max_s=score[i];
        max_i=i;
      } 
   }

   

  // apply dijkastras from the node with maximum score
   if(max_i!=-1)
    dij(max_i,!p); 
  
}


int determineNxt(int ind)
{
    loop(i,1,n+1)
    {par[i]=i;score[i]=INT_MIN; col[i]=0;}
    dij(ind,1);
    int max_s=INT_MIN+1,max_i=-1;
    //find index with maximum score
    loop(i,1,n+1)
    {
       if(score[i]>max_s && i!=ind)
        {max_s=score[i];max_i=i;}
       
    }
   
   int last=max_i;
  //cout<<"here"<<endl;
  if(last!=-1)
  { while(par[last]!=ind)
    last=par[last];
  }


 return last;

}


int main()
{
  
      
      
     int k=0;
     cin>>n;
     loop(i,1,n+1)
     {
          loop(j,1,n+1)
           cin>>mat[i][j];
          
     }
     //int max_SCore=0;
     int x=1,a,b;
     int y=determineNxt(1);
     
     cout<<x<<" "<<y<<endl;
     mat[x][y]=0;
     while(1)
     {
        cin>>a>>b;
        mat[a][b]=0;
        
        int z=determineNxt(b); 
        //cout<<"here2"<<endl;
        if(z==-1 || z==b)
          break;
        cout<<b<<" "<<z<<endl;
     }
       

 return 0;
}
