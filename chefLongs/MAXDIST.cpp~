#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(it,mymap) for(it=mymap.begin();it!=mymap.end();it++)

struct node
{
  int col;
  int val;
  vector<node *> ne;
};

int depth(node * root)
{
   //cout<<root->val<<endl;
   int lt=root->ne.size();
   root->col=1;
   int maxm=0;
   loop(i,0,lt)
    { if(root->ne[i]->col==0) 
      maxm=max(maxm,depth(root->ne[i]));
    }
  // root->col=0;
   return 1+maxm;
   
}



int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
     ll n,a,b;
     cin>>n;
     node ns[n+2];
     loop(i,0,n+2)
      { ns[i].col=0; ns[i].val=i;}
     
     loop(i,0,n-1)
      {  cin>>a>>b;
         ns[a].ne.push_back(&ns[b]);
         ns[b].ne.push_back(&ns[a]);
      }
     
      map<int,int,greater<int> > mymap;
      map<int,int,greater<int> >::iterator it;

      int lt=ns[1].ne.size();
      ns[1].col=1;
      loop(i,0,lt) 
       mymap[depth(ns[1].ne[i])]++;
      
      //mapiter(it,mymap)
      // cout<<"len "<<it->first<<" : "<<it->second<<"times"<<endl;
          
     bool flag=1;
     if(mymap.begin()->second >2)
      flag=0;
     else if(mymap.begin()->second ==1 && mymap.size()>1)
      {
           it=mymap.begin();
           it++;
          if( it->second >1)
           flag=0;
      }
     else if(mymap.size()==1 && mymap.begin()->second ==1 && mymap.begin()->first ==1)
      flag=0;

    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
        
  }

  return 0;
}
