
#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define Pair pair<int ,int >
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000005
int  x[MAXL];
int  y[MAXL];
int  len[MAXL];
int  les[MAXL];
int  more[MAXL];
int  eql[MAXL];
int  dist[MAXL];
bool side[MAXL];
int  n,L,R,md;
int  tmp[MAXL];
int  tmp1[MAXL];
int  tmp2[MAXL];
int  sd,mind;
 
map<Pair,int > mymap;
 
 
void MergeSort(int  a1, int  b1);
void Merge(int  a1,int  b1, int  a2, int  b2);
int det_func(vector<int> adj[],vector<int> adjc[],int i);
////////////////////////////////////////////////////code section to determine if the  spanning tree tiint  now has simple path with length greater than equal to L
void dfs(vector<int > adj[],vector<int > v[2][52],int  root,int  pdist,int  notgo,vector<int > adjc[])
{
   
   dist[root]=pdist+1;// set the no of edges traversed from the initial edge
   
   v[sd][pdist+1].push_back(root);//push the current node to the set of nodes on the given side of edge
 
    //set the  no of egdes les than, more than , equal assumed median 
   les[root]=les[notgo];
   more[root]=more[notgo];
   eql[root]=eql[notgo];
   ll cmp;
  // Pair p=make_pair(min(root,notgo),max(root,notgo));
   loop(i,0,adj[root].size())
   { int  ind=adj[root][i];
      if(ind==notgo)
       {cmp=adjc[root][i];break;}
          
   }
   
   if(cmp<md)
    les[root]++;
   else if(cmp>md)
    more[root]++;
   else
    eql[root]++;
 
    //if no of edges traveint ed tiint  now is R then return
   if(dist[root]==R)
     return;
   
   loop(i,0,adj[root].size())
   { int  ind=adj[root][i];
      if(ind!=notgo)
       dfs(adj,v,ind,pdist+1,root,adjc) ;
          
   }
  
   
}
 
int dfs_dist(vector<int> adjtmp[],int root, int notgo)
{
   int maxm=0;
   loop(i,0,adjtmp[root].size())
   { int ind=adjtmp[root][i];
     if(ind!=notgo)
       maxm=max(maxm,dfs_dist(adjtmp,ind,root));
   }
 
  return maxm+1;
}
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{ //fastinput;
  int t;
  scanf("%d",&t);
  while(t--)
  {
      
     // mymap.erase(mymap.begin(),mymap.end());
      
      scanf("%d %d %d",&n,&L,&R);
      vector<int > adj[n+4];
     // vector<int > adjtmp[n+4];
      vector<int> adjc[n+4];
      int  a,b,f=0;
      loop(i,0,n-1)
      { 
         cin>>a>>b>>len[i];
         x[i]=min(a,b);
         y[i]=max(a,b);
         //Pair p=make_pair(x[i],y[i]);
         //mymap[p]=len[i];
         adj[x[i]].push_back(y[i]);
         adj[y[i]].push_back(x[i]);
         adjc[x[i]].push_back(len[i]);
         adjc[y[i]].push_back(len[i]);
         
      }
      
      // sort the edges WRT their Lengths
      MergeSort(0,n-2);;
     // loop(i,0,n-1)
      //cout<<i<<"-> "<<x[i]<<"-"<<y[i]<<"  : "<<len[i]<<endl;
     
     int z;
     int low=0; int high=n-1,i;
      // find the minimum length edge which results in formation of path of length L or More
     
       // now all int  edes at index L/2  to n-((L-1)/2) can only be the possible medians in path of Length L to R 
     int inRt=-1;
    
      while(1)
      {      
            i=low+(high-low)/2;
            // cout<<low<<"----"<<i<<"-----"<<high<<": ";
            inRt=det_func(adj,adjc,i);
             if(high-low<=1)
                  break;
             //cout<<inRt<<endl;
             if(inRt==0||inRt==1)
               high=i;
             else 
               low=i;   
            //cin>>z;                   
      }
 
     if(det_func(adj,adjc,low)==0)
    cout<<len[low]<<endl;
    else if(det_func(adj,adjc,high)==0)
      cout<<len[high]<<endl;
    else
             cout<<"-1"<<endl;
  
  }
  return 0;
}
 
// this function return 0 if present index edge is median , 1 if it lies in right of mid position in any case ,-1 if it lies to left of mid position in all cases 
int det_func(vector<int> adj[],vector<int> adjc[],int i)
{
               int liesRt=-1;
               int res=-1;
                vector<int > v[2][52];
               // vector to store nodes from each side of edge
               md=len[i];     // assumed present edge to be median in path of length i
            // cout<<"assumed Median: "<<x[i]<<"-"<<y[i]<<" : "<<len[i]<<endl;
             les[x[i]]=0; more[x[i]]=0; eql[y[i]]=0;
             les[y[i]]=0; more[y[i]]=0; eql[y[i]]=0;
             //travel to left of the present edge worst till  maximum h  distnce
            
             sd=0;
             dfs(adj,v,x[i],0,y[i],adjc);
 
 
             //travel to right of the present edge worst   maximum h  distnce
             eql[x[i]]=0;
             sd=1;
             dfs(adj,v,y[i],0,x[i],adjc);  
             eql[x[i]]=1;
            //   cout<<"rt0\n";
             //loop(j,0,v[1].size())
            //  cout<<v[1][j]<<" : "<<les[v[1][j]]<<" "<<more[v[1][j]]<<" "<<eql[v[1][j]]<<endl;
 
 
 
             // now pick up aint  pair of edges from both the sides 
             loop(d,1,R+1)
             {
                 
                 loop(k,0,v[0][d].size())
                   {
                       loop(b,max(1,L+1-d),R-d+2)
                        {
                            loop(g,0,v[1][b].size())
                             {
                                   int  size=dist[v[0][d][k]]+dist[v[1][b][g]]-1; 
                                   int  lsrs=(les[v[0][d][k]]+les[v[1][b][g]]);
                                   int  grtrs=(more[v[0][d][k]]+more[v[1][b][g]]);
                                   int eqls=(eql[v[0][d][k]]+eql[v[1][b][g]])-1;
 
                     //  cout<<v[0][d][k]<<"---"<<v[1][b][g]<<" Less:"<<lsrs<<" more: "<<grtrs<<" eql: "<<(eql[v[0][d][k]]+eql[v[1][b][g]]-1)<<" "<< size<<endl;
                    
                                    int  mid=(size/2);
                                      
                                          mid++;                     
                                         if(size%2==0 && size >=L &&  size <=R  &&  lsrs<mid && grtrs<(mid-1) )
                                           { liesRt=0;res=md;break;}
                                          else if(size%2==1 && size >=L &&  size <=R  && lsrs<mid && grtrs<mid)
                                         { liesRt=0;res=md;break;}
                                          else if(size >=L &&  size <=R  && (lsrs+eqls>=mid))
                                            liesRt=1;
                                             
                                          
                             }
                             if(res!=-1)
                             break;
                        }
                          if(res!=-1)
                             break;
                    }
                    if(res!=-1)
                             break;
                
                 
                               
             }
     return liesRt;
 
 
}
 
 
void Merge(int  a1,int  b1, int  a2, int  b2)
{
    int  i=a1,j=a2,mk=a1;
      
    while(i<=b1 && j<=b2)
    {
       if(len[i]<=len[j])
       {  tmp[mk]=len[i];
          tmp1[mk]=x[i];
          tmp2[mk]=y[i]; 
          mk++;i++;
       }
       else if(len[i]>len[j])
       {  tmp[mk]=len[j];
          tmp1[mk]=x[j];
          tmp2[mk]=y[j]; 
          mk++;j++;
       }
    }
 
   while(i<=b1)
   {
          tmp[mk]=len[i];
          tmp1[mk]=x[i];
          tmp2[mk]=y[i]; 
          mk++;i++;
   }
  while(j<=b2)
   {
          tmp[mk]=len[j];
          tmp1[mk]=x[j];
          tmp2[mk]=y[j]; 
          mk++;j++;
   }
 
   loop(k,a1,b2+1)
   {  len[k]=tmp[k];
      x[k]=tmp1[k];
      y[k]=tmp2[k];
   }
}
 
 
void MergeSort(int  a1, int  b1)
{
  if(a1==b1)
   return ;
  int  mid=a1+(b1-a1)/2;
  MergeSort(a1,mid);
  MergeSort(mid+1,b1);
  Merge(a1,mid,mid+1,b1);
  
}       
