#include<bits/stdc++.h>
using namespace std;
#define ll  int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) scnum(arrname[i])
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 12800001
#define scnum(x) scanf("%d",&x)
inline void scnu(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define L 32

inline ll pow(ll a,ll b)
{
    if(b==0)
     return 1;
   ll ans= pow(a,b/2);
   ans*=ans;
   if(b%2)
   ans*=a;
   return ans;
}




void  get_bin(ll m,bool bin[L])
{
   loop(i,0,L)
    bin[i]=0;
   bin[0]= (m)%2;
   ll in=0;
   loop(i,1,L-1)
     { bin[i]= (m>>1)%2;
       m=m>>1;
       
     }
}
   ll arr[400005],n,xors[400005];
   ll bst0[400005];
   ll bstn[400005];
   ll answer=0,answer1=0;
   bool val[MAXL];
   int ch[MAXL][2];
   ll sz;

  /* void inittri()
   {
      loop(i,0,32*n)
       { val[i]=0; ch[i][0]=-1;ch[i][1]=-1;}
       sz=0;     
   }*/

   void push(ll v)
   {
      bool bin[L];
      get_bin(v,bin)
      /*
      cout<<v<<" ";
      
      loop(i,0,L)
        cout<<bin[i];
      br;
       */
     ;
     ll ind=0,pos=31;
     
     while(pos!=-1)
     {   //cout<<"inserting "<<bin[pos]<<" at "<<ind<<"   "<<ch[ind][0]<<","<<ch[ind][1]<<endl;
        bool b=bin[pos];
        if(ch[ind][b]==-1)
           {   sz++;
            // cout<<pos<<"ceating new child at "<<ind<<" : "<<sz<<" , "<<b<<endl; 
             ch[ind][b]=sz;
             val[sz]=b;
             ch[sz][0]=-1;ch[sz][1]=-1; ;
             ind=sz;
           } 
         else
           ind=ch[ind][b];  
        pos--;         
      }

   }

   void query(ll &ans,ll v)
   { bool bin[L];
     get_bin(v,bin);
     ll ind=0,pos=31;
    /*  
      cout<<v<<" search ";
      get_bin(v,bin);
      loop(i,0,L)
        cout<<bin[i];
     br;
     */
     while( pos!=-1)
     {     bool f=1;
           bool b=bin[pos];
          // cout<<"searching op bit of "<<bin[pos]<<" at "<<ind<<"   "<<ch[ind][0]<<","<<ch[ind][1]<<endl;
           if(ch[ind][!b]!=-1)
             { // cout<<pos<<"found "<<ind<<" , "<<b<<endl;
                ind=ch[ind][!b];
                ans+=pow(2,pos)*(!b);
                f=0;
             }
           else if(ch[ind][b]!=-1)
            {   //cout<<pos<<" not found "<<ind<<" : "<<" , "<<b<<endl;
                ind=ch[ind][b];
                ans+=pow(2,pos)*(b);
                f=0;
            }
        pos--;   
     }
   }

int main()
{
     scnum(n);
     arrin(arr,n);
     xors[0]=arr[0];
     loop(i,1,n)
        xors[i]=xors[i-1]^arr[i];
   
    ch[0][0]=-1;ch[0][1]=-1;
    push(0);
    answer=0;
    ll xor0=0;

    loop(i,0,n)
    {
        
        ll res=0;
        xor0=xor0^arr[i];
        push(xor0);
        query(res,xor0);
       //  cout<<res<<endl;
        answer=max(answer,(res^xor0));
        bst0[i]=answer;
    }  



  // inserting ans computing Max subarray xor till ith index frin n
  
    
    ch[0][0]=-1;ch[0][1]=-1;
    push(0);
    answer1=0;
    ll xorp=0;
 
    loop(i,0,n)
    {
        ll res=0;
        ll id=n-1-i;
        xorp=xorp^arr[id];
        push(xorp);
        query(res,xorp);
        answer1=max(answer1,(res^xorp));
        bstn[id]=answer1;
    }
   
  //determine();
  /*
   
  loop(i,0,n)
    cout<<bst0[i]<<" ";
   br;
   loop(i,0,n)
    cout<<bstn[i]<<" ";
   br;
  */
      ll ulans=0;
     loop(i,0,n-1)
      ulans=max(ulans,bst0[i]+bstn[i+1]);
   
   printf("%d\n",ulans);
  
  return 0;
}

