 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) (a>b?a:b) 
#define min(a,b) (a<b?a:b) 
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000006
ll arr[MAXL];
ll n;


int main()
{  fastinput;
   ll k;
   string s1;
   cin>>k;
   cin>>s1;
   map<ll,char> mymap;
   map<ll,char> :: iterator it;
   ll l=s1.length(),d=0;
   ll pos[27];
   ll f[27]={0};
   loop(i,0,27)
    pos[i]=INT_MAX;

   loop(i,0,l)
    { pos[s1[i]-'a']=min(i,pos[s1[i]-'a']) ; 
      if(f[s1[i]-'a']==0)
       {f[s1[i]-'a']=1; d++;}
    }
   

   loop(i,0,27)
     { if(f[i]==1)
       mymap[pos[i]]=char(int('a')+i);
      }
   ll j=0;
   mapiter(mymap,it)
   {   f[j]=it->first;
      // cout<<f[j]<<endl;
       j++;
   }

   f[j]=l-1;
   j++;
   if(d<k)
   cout<<"NO"<<endl;
   else
   { ll ct=0,ind=0;
     cout<<"YES"<<endl;
     loop(i,1,j)
     {    
          if(ct==k-1)
          {ind=f[i-1];break;}

          loop(m,f[i-1],f[i])
           cout<<s1[m];
          cout<<endl;
           ct++;
          
     }
      loop(i,ind,l)
       cout<<s1[i];
       br;
     
   }
    
  return 0;  
}
