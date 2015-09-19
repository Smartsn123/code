#include<bits/stdc++.h>
using namespace std;
#define ll  int
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

ll n,x[MAXL],y[MAXL];


int main()
{
   ll t;
   in(t);
  while(t--)
  {
     in(n);
      loop(i,0,n)
       {  in(x[i]);in(y[i]);} 
      
      ll xmin=0,ymin=0,xmax=0,ymax=0,abl=0,bll=0,onl=0,abr=0,blr=0,onr=0;
       
      loop(i,0,n)
      {
          if(x[xmin]>x[i])
           xmin=i;
          if(x[xmax]<x[i])
           xmax=i; 
          if(y[ymin]>y[i])
           ymin=i;
          if(y[ymax]<y[i])
           ymax=i;
           
      }
  
       loop(i,0,n)
       {
             if(x[i]==x[xmin] && y[i]<y[xmin])
              xmin=i;
             if(x[i]==x[xmax] && y[i]>y[xmax])
              xmax=i;   
       }
       bool f=1;
       //cout<<"--"<<x[xmin]<<","<<y[xmin]<<endl;
       //cout<<"--"<<x[xmax]<<","<<y[xmax]<<endl;
  
       if(x[xmin]== x[xmax])
       {
           printf("1\n");
          printf("%d NE\n",ymin+1); f=0;
       }
       else if(y[ymin]==y[ymax])
       {
           printf("1\n");
           printf("%d NE\n",xmin+1); f=0;
       }
       else if(y[ymin]==y[xmin])
          {
               printf("1\n");
               printf("%d NE\n",xmin+1);f=0;
          }
       else if(y[xmax]==y[ymax])
          {
               printf("1\n");
               printf("%d SW\n",xmax+1); f=0;
          }
       
         loop(i,0,n)
          {
             if(x[i]==x[xmin] && y[i]>y[xmin])
              xmin=i;
             if(x[i]==x[xmax] && y[i]<y[xmax])
              xmax=i;   
          }
       //  cout<<"--"<<x[xmin]<<","<<y[xmin]<<endl;
       //cout<<"--"<<x[xmax]<<","<<y[xmax]<<endl;
     if(f){
         if(y[xmin]==y[ymax])
         {     printf("1\n");
               printf("%d SE\n",xmin+1);
         }
        else if(y[xmax]==y[ymin])
         {     printf("1\n");
               printf("%d NW\n",xmax+1);
         }
        
       else if(y[xmin] <= y[xmax])
      {  
         printf("2\n");
         printf("%d NE\n",xmin+1);
         printf("%d SW\n",xmax+1);
          
      }
     else if(y[xmin] >  y[xmax])
      {  printf("2\n");
         printf("%d SE\n",xmin+1);
         printf("%d NW\n",xmax+1);
        
      }
      }
     // else
       // cout<<xmin/0<<endl;
      
      //else
      
      
          
  }
  return 0;
}

