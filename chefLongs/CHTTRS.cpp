#include<bits/stdc++.h>
using namespace std;
#define ll   int
#define in(a)  scanf("%d",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 1000006
 
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
int canrot,typ;
int mat[20][20],colh[20];
ll req_width[8][4]={ {4,1,4,1},
                     {3,2,2,3},
                     {3,2,3,2},
                     {2,2,2,2},
                     {3,2,2,3},
                     {3,2,3,2},
                     {3,2,3,2},
                   };
void make();
void setconf(ll typ , ll &cx ,ll &cy,char & conf);
typedef pair<ll,ll> Pair;
map<Pair,vector<ll> > inc;
 
ll query_maxh(int lf,int rt)
{  
   ll thhi=INT_MIN;
   loop(i,lf,min(rt+1,15))
     thhi=max(thhi,colh[i]);
   return thhi;
}
 
void search_req_width(ll width,ll & rowno,ll & colno)
{
   // goto each window width and determine the heighest height in the window-the pos our base will be placed
   int thhi,hhi=INT_MAX,hhi_i=0;
   for(int i=0;i<=min(15,(15-width));i++)
   {  
      thhi=query_maxh(i,i+width-1);//function to give maximum height in range i to i+width-1
      if(thhi<hhi)
       { hhi=thhi;
         hhi_i=i;
       }
   }
 
   rowno=hhi+1;
   colno=hhi_i;
   
}
 
// update the hight of the col lf to rt according to given yth config of x th teris
// hhi is the heighest height occupied in the given window
void update_h(ll x,ll y,ll lf,ll rt,ll hhi)
{
    ll ind=0;
    loop(i,lf,min(15,rt+1))
     { colh[i]=hhi+inc[make_pair(x,y)][ind]; ind++;}
}
 
 
 
int main()
{
  make();
  loop(i,0,15)
   colh[i]=-1;
  ll rep=0;
  while(1)
  {   //rep++;
     cin>>canrot>>typ;
      if(cin.fail())
        break;
     char conf,cd;
     int cx,cy,base,li;
    
     if(canrot==1)
       { setconf(typ,cx,cy,conf);
         //cout<<cx<<","<<cy<<endl;
         search_req_width(req_width[cx][cy],base,li);
         //cout<<base<<" ,"<<li<<endl;
         update_h(cx,cy,li,li+req_width[cx][cy]-1,base);
         //chk()
         printf("%c %d %d\n",conf,base+1,li+1); 
       }
     else if(canrot==2)
       { scanf(" %c",&cd);
         cx=typ-1;cy=int(cd-'a'); 
         search_req_width(req_width[cx][cy],base,li);
         update_h(cx,cy,li,li+req_width[cx][cy]-1,base);
         //chk()
         printf("%c %d %d\n",conf,base+1,li+1);
         
       }
      else
          break;
  }
  return 0;
}
 
 
 
void setconf(ll typ , ll &cx ,ll &cy,char & conf)
{   if(typ==1)
           {conf='b'; cx=0;cy=0;} // b,a,b,a,b,c,b
     else if(typ==2)
           {conf='a'; cx=1;cy=0;}
     else  if(typ==3)
           {conf='b'; cx=2;cy=0;}
     else  if(typ==4)
          {conf='a'; cx=3;cy=0;}
     else if(typ==5)
           {conf='b'; cx=4;cy=1;}
     else if(typ==6)
           {conf='c'; cx=5;cy=0;}
     else if(typ==7)
           {conf='b'; cx=6;cy=0;}
               
     
}
 
void make()
{
 
//1
//inc[make_pair(0,0)].resize(4);
int myints1[]={1,1,1,1};
inc[make_pair(0,0)].assign(myints1,myints1+4);
//2
// inc[make_pair(0,1)].resize(1);
int myints2[]={4};
inc[make_pair(0,1)].assign(myints2,myints2+1);
//3
//inc[make_pair(0,2)].resize(4);
int myints3[]={1,1,1,1};
inc[make_pair(0,2)].assign(myints3,myints3+4);;
//4
//inc[make_pair(0,3)].resize(1);
int myints4[]={4};
inc[make_pair(0,3)].assign(myints4,myints4+1);
 
 
//5
//inc[make_pair(1,0)].resize(3);
int myints5[]={2,1,1};
inc[make_pair(1,0)].assign(myints5,myints5+3);
//6
int myints6[]={1,3};
inc[make_pair(1,1)].assign(myints6,myints6+2);
//7
//inc[make_pair(1,2)].resize(2);
int myints7[]={3,3};
inc[make_pair(1,2)].assign(myints7,myints7+2);
//8
//inc[make_pair(1,3)].resize(3);
//inc[make_pair(1,3)]={2,2,2};
int myints8[]={2,2,2};
inc[make_pair(1,3)].assign(myints8,myints8+3);
 
 
//9
//inc[make_pair(2,0)].resize(3);
//inc[make_pair(2,0)]={1,1,2};
int myints9[]={1,1,2};
inc[make_pair(2,0)].assign(myints9,myints9+3);
//10
//inc[make_pair(2,1)].resize(2);
//inc[make_pair(2,1)]={3,1};
int myints10[]={3,1};
inc[make_pair(2,1)].assign(myints10,myints10+2);
//11
//inc[make_pair(2,2)].resize(3);
//inc[make_pair(2,2)]={2,2,2};
int myints11[]={2,2,2};
inc[make_pair(2,3)].assign(myints11,myints11+3);
//12
//inc[make_pair(2,3)].resize(2);
//inc[make_pair(2,3)]={3,3};
int myints12[]={3,3};
inc[make_pair(2,3)].assign(myints12,myints12+2);
 
 
//13
//inc[make_pair(3,0)].resize(2);
//inc[make_pair(3,0)]={2,2};
int myints13[]={2,2};
inc[make_pair(3,0)].assign(myints13,myints13+2);
//14
//inc[make_pair(3,1)].resize(2);
//inc[make_pair(3,1)]={2,2};
int myints14[]={2,2};
inc[make_pair(3,1)].assign(myints14,myints14+2);
//15
//inc[make_pair(3,2)].resize(2);
//inc[make_pair(3,2)]={2,2};
int myints15[]={2,2};
inc[make_pair(3,2)].assign(myints15,myints15+2);
//16
//inc[make_pair(3,3)].resize(2);
//inc[make_pair(3,3)]={2,2};
int myints16[]={2,2};
inc[make_pair(3,3)].assign(myints16,myints16+2);
 
 
//17
//inc[make_pair(4,0)].resize(3);
//inc[make_pair(4,0)]={1,1,2};
int myints17[]={1,1,2};
inc[make_pair(4,0)].assign(myints17,myints17+3);
//18
//inc[make_pair(4,1)].resize(2);
//inc[make_pair(4,1)]={3,2};
int myints18[]={3,2};
inc[make_pair(4,1)].assign(myints18,myints18+2);
//19
//inc[make_pair(4,2)].resize(3);
//inc[make_pair(4,2)]={1,2,2};
int myints19[]={1,2,2};
inc[make_pair(4,2)].assign(myints19,myints19+3);
//20
//inc[make_pair(4,3)].resize(2);
//inc[make_pair(4,3)]={3,2};
int myints20[]={3,2};
inc[make_pair(4,3)].assign(myints20,myints20+2);
 
 
//21
//inc[make_pair(5,0)].resize(3);
//inc[make_pair(5,0)]={1,2,1};
int myints21[]={1,2,1};
inc[make_pair(5,0)].assign(myints21,myints21+3);
//22
//inc[make_pair(5,1)].resize(2);
//inc[make_pair(5,1)]={3,2};
int myints22[]={3,2};
inc[make_pair(5,1)].assign(myints22,myints22+2);
//23
//inc[make_pair(5,2)].resize(3);
//inc[make_pair(5,2)]={2,2,2};
int myints23[]={2,2,2};
inc[make_pair(5,2)].assign(myints23,myints23+3);
//24
//inc[make_pair(5,3)].resize(2);
//inc[make_pair(5,3)]={2,3};
int myints24[]={2,3};
inc[make_pair(5,3)].assign(myints24,myints24+2);
 
 
//25
//inc[make_pair(6,0)].resize(3);
//inc[make_pair(6,0)]={2,2,1};
int myints25[]={2,2,1};
inc[make_pair(6,0)].assign(myints25,myints25+3);
//26
//inc[make_pair(6,1)].resize(2);
//inc[make_pair(6,1)]={2,3};
int myints26[]={2,3};
inc[make_pair(6,1)].assign(myints26,myints26+2);
//27
//inc[make_pair(6,2)].resize(3);
//inc[make_pair(6,2)]={2,2,1};
int myints27[]={2,2,1};
inc[make_pair(6,2)].assign(myints27,myints27+3);
//28
//inc[make_pair(6,3)].resize(2);
//inc[make_pair(6,3)]={2,3};
int myints28[]={2,3};
inc[make_pair(6,3)].assign(myints28,myints28+2);
 
 
} 
 
