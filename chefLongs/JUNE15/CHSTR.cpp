#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(ll i=k;i<n;i++)
#define ll long long int
#define mod 1000000007
#define max(a,b) (a>b)?a:b 
ll nt;

struct node
{ string c;
  
  vector<node *> n;
  int leaf;
};

void insertTree(string suf, node * root,int sufno)
{
   //cout<<"inserting "<<suf<<" of substring "<<sufno<<endl;
   //goto all the neigbour of the root and check if first character is a neighbour or it
   
   bool flag=0;

   loop(i,0,root->n.size())
   {  
      char th=root->n[i]->c[0];
      if(th==suf[0])
       {  //cout<<"here\n"; 
         flag=1;
          root->n[i];
          string str=root->n[i]->c;
          ll t1=root->n[i]->c.length();
          ll t2=suf.length();
          t1--;
          t2--;
          ll l=0;
          while(suf[l]==str[l] && l<=min(t1+1,t2+1))
          l++;
          l--;


          if(l==t1 && l<t2)
          insertTree(suf.substr(l+1,t2-l+1),root->n[i],sufno);
          
          else if(str[t1]=='!')
           { //cout<<"here2\n";
             root->n[i]->c=str.substr(0,l+1);
             int sff=root->n[i]->leaf;
             root->n[i]->leaf=-1;
             insertTree(str.substr(l+1,t1-l+1),root->n[i],sff);
             insertTree(suf.substr(l+1,t2-l+1),root->n[i],sufno);
           }
          
          else
           { //cout<<"here3\n";
             root->n[i]->c=str.substr(l+1,t1-l+1);
             node * n1=new node();
             n1->c=str.substr(0,l+1); n1->leaf=-1;
             insertTree(suf.substr(l+1,t2-l+1),n1,sufno);
            
            // nx=NULL;
             
             n1->n.push_back(root->n[i]);
            
             root->n[i]=n1;
             
             
           }

           
          break;
          
       }
    }
   if(!flag)//if first character is not found in neighbour create a new neigbour node for character set next to that node
    {  node *nx= new node();

       nx->c=suf;
       nx->leaf=sufno;
       root->n.push_back(nx);
    }
    
   return ;
}



void CsuffixTree(string st,node * n)
{
  st=st+"!";
  for(int i=0;i<=nt;i++)
    {
     insertTree(st.substr(i,nt+1),n,i);
    }
}

ll maxm=0;

ll godeep(ll arr[] ,node * root)//returns no of leafs after present node
{ ll count=0;

   if(root->leaf==-1)
   {
   
   loop(i,0,root->n.size())
   {  node * nx=root->n[i];
     /* if(nx->c[nx->c.length()-1]!='!')
      cout<<nx->c<<" "<<nx->leaf<<endl;
      else 
      cout<<nx->c<<" "<<nx->leaf<<endl;
     */
      count+=godeep(arr,nx);
   }
   
     //cout<<"updated : a["<<count<<"]"<<root->c.length()<<endl;
      arr[count]+=root->c.length();
     return count;
   }

   else 
    { //cout<<"updated : a[1]--"<<root->c.length()-1<<endl; 
     arr[1]+=root->c.length()-1; return 1;}


 
}

void countin(ll arr[],node* root)
{
  ll count=0;
  loop(i,0,root->n.size())
   {  
      node * nx=root->n[i];
      
    // cout<<nx->c<<" "<<nx->leaf<<endl;
      if(nx->c!="!")
       {
      count=godeep(arr,nx);
      if(count>maxm)
        maxm=count;
       }
   }
}





int co[5001][2501];


void nCr()
{
  int i, j;
  int n=5000,k=2500;
   
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            
            if (j == 0 || j == i)
                co[i][j] = 1;
 
            else
                co[i][j] = (co[i-1][j-1] + co[i-1][j])%mod;
        }
    }
}

string ip()
{
    string i="";
    int temp=getchar_unlocked();
    while(temp<'a'||temp>'z')
        temp=getchar_unlocked();
    while(temp>='a'&&temp<='z')
    {
        i+=(char)temp;
        temp=getchar_unlocked();
    }
    return i;
}



int main()
{ //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  nCr(); 
  ll t;
  in(t);
  while(t--)
  { // cin.ignore();
    
     ll q,k;
      char st[5001];
      string inp;
      in(nt);in(q);
      //cout<<n<<" "<<q<<endl;
      inp=ip();
    
 
     node * root=new node();
     root->c="A";
     root->leaf=-1;
      ll rec[1000000]={0};
     if(maxm!=nt)
    { CsuffixTree(inp,root);
     countin(rec,root);
     }
    // loop(i,0,maxm+1)
     //cout<<i<<" : "<<count[i]<<endl;
      
    
       
       ll ans[maxm+1],res;
       loop(i,0,maxm+1)
         ans[i]=-1;
 
       while(q--)
       {   res=0;
           in(k);
           
           if(k<=maxm)
            {   
                  
                 if(ans[k]!=-1)
                   res=ans[k];
                 else if(maxm==nt)
                  { ans[k]=0;
                    loop(i,k,maxm+1)
                    ans[k]= (ans[k]%mod+(co[i][min(k,i-k)])%mod)%mod;
                    res=ans[k];
                  }
                 else
                  { ans[k]=0;
                    loop(i,k,maxm+1)
                    ans[k]= (ans[k]%mod+(rec[i]%mod*co[i][min(k,i-k)]%mod)%mod)%mod;
                    res=ans[k];
                  }
            }
          out(res);  br;
       }
      
    
      
    
  }
  return 0;
}
