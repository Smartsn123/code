#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mapl,itl)  for(itl=mapl.begin();itl!=mapl.end();itl++)
#define MAXL 1000006
ll arr[1000006];
ll f1[1000006];
ll f2[1000006];
ll l[1000006];
ll r[1000006];
ll n;


int main()
{
   cin>>n;
   map<ll,ll> mymap;
   map<ll,ll>:: iterator it;
   loop(i,0,MAXL)
   {
    l[i]=n+1;
    r[i]=-1;
   }
   loop(i,0,n)
   { cin>>arr[i];
     f1[arr[i]]++;
     f2[arr[i]]++;
     if(l[arr[i]]>i)
        l[arr[i]]=i;
     if(r[arr[i]]<i)
        r[arr[i]]=i;
   }


   sort(f1,f1+1000006);
   ll maxf=f1[MAXL-1];

   loop(i,0,MAXL)
   {
     if(f2[i]==maxf)
       mymap[i]=1;
   }
   int k=MAXL-1,ansl,ansr,minir=n+1;

    mapiter(mymap,it)
   {    ll val=it->first;
        int i,j;
        i=l[val];
        j=r[val];

        if(minir>(j-i+1))
        { minir=(j-i+1);
          ansl=i+1;
          ansr=j+1;
        }
       if(minir==1)
        break;
       
   }

    cout<<ansl<<" "<<ansr<<endl;
    return 0;  
}
