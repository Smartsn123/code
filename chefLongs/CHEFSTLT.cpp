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

ll arr[1000006];
ll n;


int main()
{
   string s1,s2;
   ll t;
   in(t);
   loop(c,0,t)
   { 
      if(c==0)
     cin.ignore();
  
     cin>>s1;
     cin>>s2;
    
     ll l=s1.length();
     ll count1=0,count2=0;
     loop(i,0,l)
     {
         if(s1[i]==s2[i] && s1[i]!='?')
           count1++;
         else if(s1[i]=='?' || s2[i]=='?')
           count2++;               
     }   

     cout<<l-count1-count2<<" "<<l-count1<<endl;
     
      
   }
}
