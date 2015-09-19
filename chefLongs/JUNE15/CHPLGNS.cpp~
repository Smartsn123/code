#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)


int main()
{
  ll t;
  in(t);
  while(t--)
  {
     
     ll edges[100005];
     ll ans[100005];
     ll x[100005];
     ll y[100005];
     ll n,m;
     typedef pair<ll,ll> key;
     map <key,ll> mapped;


     in(n);

      ll q1=0,q2=0;

      loop(i,0,n)
      {    
           in(m);
           loop(j,0,m)
            {in(x[j]); in(y[j]);}
  
           q1=0;q2=0;
           loop(j,0,m)
            {
               q1+=x[j]*y[(j+1)%m];
               q2+=y[j]*x[(j+1)%m];
            }
            ll area=abs(q1-q2);
            key p=make_pair(area,i);
            mapped[p]=0;
            
      }

      ll k=0;
      for(map <key,ll>::iterator it=mapped.begin(); it !=mapped.end();it++)
      {
         // cout<<it->first.first<<" , "<<it->first.second<<endl;
          ans[it->first.second]=k;
          k++;
      }
    
 
    loop(i,0,n)
     {out(ans[i]); printf(" ");}
       br;
     
  }

  return 0;  
}

