#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define ll long long int
#define graph(v) vector<ll> v[100000]
#define mod 1000000007

struct node
{ char c;
  int  p;
  vector<node *> n;
};

void insertTree(char * s ,int pos, node * root,int sufno)
{
   
   //goto all the neigbour of the root and check if first character is a neighbour or it
   node * nx=root;
   bool flag=0;
   loop(i,0,root->n.size())
   { 
      char th=root->n[i]->c;
      if(th==s[pos])
       {nx=root->n[i]; flag=1;}//if first character found in neighbour set next node to it
   }

    
   if(!flag)//if first character is not found in neighbour create a new neigbour node for character set next to that node
    {  nx= new node();
       nx->c=s[pos]; nx->p=0;
       root->n.push_back(nx);
    }
   
    if(pos!=strlen(s))
    insertTree(s,pos+1,nx,sufno);//insert from next character from next
    else 
    {nx->p=sufno;nx->c='!';return; }  
}



void CsuffixTree(char *s,node * n)
{
  int l=strlen(s);
  
  loop(i,0,l+1)
  insertTree(s,i,n,i+1);
}


ll godeep(ll arr[] ,node * root)//returns no of leafs after present node
{
   if(root->p!=0)
    return 1;

   
   ll count=0;
   loop(i,0,root->n.size())
   { // if(root->n[i]->c!='!')
     // cout<<root->n[i]->c<<endl;
     // else
      // cout<<root->n[i]->p<<endl;
      node * nx=root->n[i];
      count+=godeep(arr,nx);
   }
 // cout<<"updated : a["<<count<<"]"<<endl;
  arr[count]+=1;
  return count;
}

void countin(ll arr[],node* root)
{
  ll count=0;
  loop(i,0,root->n.size())
   { 
      node * nx=root->n[i];
      //cout<<nx->c<<endl;
      if(nx->c!='!')
       {
      count=godeep(arr,nx);
     // cout<<count<<endl;
      //arr[count]+=1;
       }
   }
}



int main()
{
  
  char s[1000]="ababa";
  node * root=new node();
  root->c='A';
  root->p=0;
  CsuffixTree(s,root);
  ll arr[1000000]={0};
  countin(arr,root);
  loop(i,0,5)
    {out(arr[i]); printf(" ");}
  br;
}
