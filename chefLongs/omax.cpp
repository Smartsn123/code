#include<bits/stdc++.h>
using namespace std;
#define ll  int
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked

void scnum(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
/////////////////////////////////////////////////////////////Your Code Starts Here////////////////////////////////////////////////////////////////////////////////
/*
We define F(i, j, k, t) as the minimal sum of a sub-matrix appearing in range (i, j)..(k, t), 
it should be calculated by Min{F(i + 1, j, k, t), F(i, j + 1, k, t), F(i, j, k - 1, t), F(i, j, k, t - 1), S} 
where S is sum of the sub-matrix having two opposite vertices respectively (i, j) and (k, t).
*/


ll mat[100][100];
ll rsum[100][100];
ll sumdp[100][100];
ll F[81][81][81][81];
ll m,n;

inline ll find_sum(ll i,ll j,ll k, ll t)
{
  ll ans=0;
  ans+=sumdp[k][t];
  if(j>0)
  ans-=sumdp[k][j-1];
  if(i>0)
  ans-=sumdp[i-1][t];
  if(i>0 && j>0)
  ans+=sumdp[i-1][j-1];

  return ans;
}

void compute_F()
{

 loop(dx,0,m)
 {
       loop(dy,0,n)
       {         loop(i,0,m-dx)
                  {
                    loop(j,0,n-dy)
                     {  ll k=i+dx,t=j+dy;
                        ll sum= find_sum(i,j,k,t);
                        F[i][j][k][t]=sum;
                        
                        if(k>i)
                         { F[i][j][k][t]=min(F[i][j][k][t],F[i+1][j][k][t]);
                           F[i][j][k][t]=min(F[i][j][k][t],F[i][j][k-1][t]);
                         }
                        if(t>j)
                         { F[i][j][k][t]=min(F[i][j][k][t],F[i][j+1][k][t]);
                           F[i][j][k][t]=min(F[i][j][k][t],F[i][j][k][t-1]);
                         }

                    //  cout<<i<<","<<j<<","<<k<<","<<t<<"  : "<<sum<<" ,  F : " <<F[i][j][k][t]<<endl;
                       
                      }
           
                  }
          }
   }
}





int main()
{//fastinput;
  scanf("%d %d",&m,&n);
  while(!(n==0 && m==0))
  {
    
    loop(i,0,m)
      {loop(j,0,n)  
        scanf("%d",&mat[i][j]);      
      }
  /*
    loop(i,0,m)
      {loop(j,0,n)  
        cout<<mat[i][j]<<" ";
        br;      
      }*/
    
     //br;
    loop(i,0,m)
    {
        loop(j,0,n)
        { if(j==0)
            rsum[i][j]=mat[i][j];
          else
            rsum[i][j]=rsum[i][j-1]+mat[i][j];

           //cout<<rsum[i][j]<<" ";
        }
       //  br;
    }

  // br;
    loop(i,0,m)
    {
        loop(j,0,n)
        { if(i==0)
            sumdp[i][j]=rsum[i][j];
          else
             sumdp[i][j]=rsum[i][j]+sumdp[i-1][j];

       // cout<<sumdp[i][j]<<" ";
        }
        // br;
    }

   compute_F();
   ll maxm=-INT_MIN;
   // br;
   loop(i,0,m)
   {
       loop(j,0,n)
        {
             loop(k,i+2,m)
              {
                   loop(t,j+2,n)
                    {
                        ll sum= find_sum(i,j,k,t);
                       

                       //cout<<i<<","<<j<<","<<k<<","<<t<<"  : "<<sum<<" ,  " <<F[i+1][j+1][k-1][t-1]<<endl;
                        sum-=F[i+1][j+1][k-1][t-1];
                        maxm=max(maxm,sum);
                       
                    }
              }
        }
   }  

   
   printf("%d\n",maxm);    
  scanf("%d %d",&m,&n); 
  }
  return 0;
}

