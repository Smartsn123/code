#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define ull long long int

typedef pair<int,int> Key;
priority_queue<Key>  q;
void DIJ(vector v , int ind,bool col[],int cost[],int par[])
{
   
    col[ind]=1;
    ull mini=INT_MAX;
    ull mini_i=0;

    while
     {   
         if(col[i]!=1)
          {    
               if(cost[i]> cost[ind]+1)
               {par[i]=ind; cost[i]=cost[ind]+1; }

               if(cost[i]<mini)
               {mini=cost[i]; mini_i=i;}
               Key p= make_pair(cost[i],i);
               q.push(p);
           
           }
           

         DIJ(v,mini_i,col,cost,par);
              
     }
   
    
}

int main()
{
   ull t;
   in(t);
   while(t--)
    {
        ull n;
        vector<int>  graph[10000];
        in(n);
        ull a,b;
        
        loop(i,0,n-1)
          {
              in(a); in(b);
              graph[a].push_back(b);
              graph[b].push_back(a); 
          }


       
              

    }
}
