#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)

#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 100005
int arr[MAXL];
int sup[MAXL];
vector<int> ind[MAXL];
int li[300000];
int ri[300000];
int val[300000];
int l[MAXL];
int r[MAXL];
int n,k;
int maxm=INT_MIN;

ll max(ll a,ll b)
{ 
  if(a>b)
   return a;
  else
   return b;
 }
ll min(ll a,ll b)
{ 
  if(a>b)
   return b;
  else
   return a;
 }

#define gc getchar_unlocked
 
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }

 int Floor(vector<int> A, int key)
{   
   int res=-1;
   loop(i,0,A.size())
   { if(A[i]<=key)
      res=A[i];
     else
     break;
   }
  
   return res;
}
 
void make_tree(int x , int y, int ind)
{
   li[ind]=x; 
   ri[ind]=y;
   if(x==y)
   {  val[ind]=r[x]; return;}
   int mid=x+(y-x)/2;
   make_tree(x,mid,2*ind+1);
   make_tree(mid+1,y,2*ind+2);
   val[ind]=min(val[2*ind+1],val[2*ind+2]);
   
}
 
int query_min(int ql,int qr ,int ind)
{
   int x=li[ind];
   int y=ri[ind];
   if(qr < x || ql >y)
    return INT_MAX;
   
   if(x>=ql && y<=qr)
    return val[ind];
   
   int lf=query_min(ql,qr,2*ind+1);
   int rt=query_min(ql,qr,2*ind+2);
   return min(lf,rt);
}
 
 ll oo;
void determine()
{ //cout<<"determine"<<endl;
  loop(i,0,n)
  { r[i]=n-1; l[i]=0;}
 
  loopr(i,n-1,1)
  {// cout<<"computing l["<<i<<"]\n";
    
     for(int j=0;(arr[i]*j+k)<=maxm;j++)// compute aint multiples of arr[i] less than maxm one by one
      {  
         ll inx=arr[i]*j;
         inx+=k;
        if((ind[inx].size())>0  && (inx)%arr[i]==k)//if that multiple exists in the suppl array find the its first index that lies nearest in left
        { 
            oo=-1;

          for(int q=0;ind[inx][q]<=(i-1) && q<ind[inx].size();q++)
          { r[ind[inx][q]]=min(r[ind[inx][q]],i-1);
            oo=ind[inx][q];
          }
          
          l[i]=max(l[i],oo+1); 
        }
        //if(l[i]==i)
         // break;
      }
     // cout<<"computed l"<<i<<"] : "<<l[i]<<endl;
  }
  
}

void determine_l()
{
  
  loopr(i,n-1,0)
  {   l[i]=i;
      loopr(j,i-1,0)
       { if(arr[j]%arr[i]==k)
           break;
         else
           l[i]=j;
       }
     // cout<<l[i]<<" ";
  }
}
 
void determine_r()
{
  
  loop(i,0,n)
  {   r[i]=i;
      loop(j,i+1,n)
       { if(arr[i]%arr[j]==k)
           break;
         else
           r[i]=j;
       }
     // cout<<r[i]<<" ";
  }
}
 
 
int main()
{//fastinput;
   maxm=0;
  scanint(n);scanint(k);
  bool f=0;
  loop(i,0,n)
   {   
       scanint(arr[i]);
       maxm=max(maxm,arr[i]);
       ind[arr[i]].push_back(i);
        if(ind[arr[i]].size()>1000)
          f=1;
   }
  
 /*
  loop(i,0,maxm+1)
   { if(ind[i].size()>0)
      {  cout<<i<<" :";
         loop(j,0,ind[i].size())
            cout<<ind[i][j]<<" ";
         br;
      }
   }
 */
  if(f && k==0)
  { determine_l();
    determine_r();
  }
  else
  determine();
  
  /*
  loop(i,0,n)
   cout<<l[i]<<" ";
  br;
   loop(i,0,n)
   cout<<r[i]<<" ";
  br;
  */
   make_tree(0,n-1,0);
   typedef pair<int,int> Pair;
   map<Pair,int> mymap;
    map<Pair,int>:: iterator it;
   int rlt[n+1];
   rlt[0]=(r[0]+1);
   int sc=0,pr=1,lf=-1,rl=(r[0]+1),size=1;
  while(1)
  {    
       if(pr==n)
       {  Pair p=make_pair(lf+1,pr-1);
          mymap[p]=1;
          break;
       }
      else if( (l[pr]-1)<=lf &&  pr<rl )//If the new element has no problem with leftmost element of the subarray the add it to subarray
        { rl=min(r[pr]+1,rl); rlt[pr]=rl;}
      else   //else store the subarray tiint prev element and start new subarray where leftmost element is the leftmost of present and right limit is minimum rt-
        { Pair p=make_pair(lf+1,pr-1);//- from new leftmost to present
          mymap[p]=1;
          lf=max(l[pr]-1,lf);
          //rl=query_min(l[pr],pr,0)+1;
           if(rlt[max(0,l[pr]-1)]==rl)
            rl=query_min(l[pr],pr,0)+1;
           else
           rl=min(r[pr]+1,rl);
          
        }
 
      pr++;
     
  }
 
 // mapiter(mymap,it)
    // cout<<it->first.first<<" - "<<it->first.second<<endl;
  
  ll x=0,yp=-1,y=0;
  ll ans=0;
  mapiter(mymap,it)
   {  
     x=it->first.first;
     y=it->first.second;
     ll ovlp=max(0,(yp-x+1));
     ans-=(ovlp*(ovlp+1))/2;
     // br; cout<<ans<<endl;
     ans+=((y-x+1)*(y-x+2))/2;
     yp=it->first.second;
     // cout<<ans<<endl;
   }
   //if(k==0)
   // ans-=n;
   printf("%lld\n",ans);
   
  return 0;
}   
