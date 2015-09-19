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
#define mod 1000000007
#define MAXL 1000006
int x[9];
int y[9];
int z[9];

struct loc
{
   int x,y,z;   
};

vector<loc> per;
map<ll,ll> mymap;
map<ll,ll>:: iterator it;

void circulate(int ar[],int beg,int end)
{
   int tmp=ar[beg];
   loop(i,beg,end)
     ar[i]=ar[i+1];
   ar[end]=tmp;   
}

void gen_per(int frm,int ar[])
{
  if(frm==2)
  { loc th;
    th.x=ar[0]; th.y=ar[1]; th.z=ar[2];
    per.push_back(th);
    //cout<<per[per.size()-1].x<<" , "<<per[per.size()-1].y<<" , "<<per[per.size()-1].z<<endl;
    //cout<<per.size()<<endl;
    return ;
  }

  loop(i,frm,3)
   {  
      gen_per(frm+1,ar);
      circulate(ar,frm,2);
   }
  
  
  
}

ll dist(int i, int  j)
{
  return  pow((x[i]-x[j]),2.0)+pow((y[i]-y[j]),2.0)+pow((z[i]-z[j]),2.0);
}

bool is_cube()
{
  bool f=0;
  loop(i,0,8)
  {
     loop(j,i+1,8)
     {
         mymap[dist(i,j)]+=1;
     }
  }
 ll ar[3]={0,0,0};
 if(mymap.size()==3)
  {   ll key=0;
      mapiter(mymap,it)
       ar[key++]=it->first;
      sort(ar,ar+3);
      
     if(mymap[ar[0]]==12 && mymap[ar[1]]==12 && mymap[ar[2]]==4)
      f=1;
  }

  return f;
  
}
bool valid_res(int ind)
{
    if(ind==8)
    {  if(is_cube())
         return 1;
       else
         return 0;
    }
    int ar[3]={x[ind],y[ind],z[ind]};
    per.resize(0);
    vector<loc> per1;
    gen_per(0,ar);
    loop(i,0,per.size())
      per1.push_back(per[i]);
    
    loop(i,0,per1.size())
    {   x[ind]=per1[i].x; 
        y[ind]=per1[i].y;
        z[ind]=per1[i].z;
        if(valid_res(ind+1))
         return 1;
    }
    
    return 0;
}


int main()
{
  fastinput;
  
  loop(i,0,8)
     cin>>x[i]>>y[i]>>z[i];

  bool res=0;
  cout<<"here\n";
  res=valid_res(0);
    cout<<"here1\n";
  if(res)
  {
     cout<<"YES"<<endl;
     loop(i,0,8)
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
  }
  else
   cout<<"No"<<endl;
  return 0;
}
