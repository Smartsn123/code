#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define infini 10000000000
#define ull long long int



float maxf(float a, float b)
{
  if(a>b)
   return a;
  else
   return b;
}

float minf(float a, float b)
{
  if(a<b)
   return a;
  else
   return b;
}

bool ifcross(ull x1,ull y1,ull x2,ull y2, ull a1,ull b1)
{
  

  if(y1!=y2)
  {  
     bool a=0,b=0;
     float x = (x2-x1)*(b1-y1)+x1*(y2-y1);
           x=x/(y2-y1) ;

     if(x<=maxf(float(x1),float(x2)) && x>=minf(float(x1),float(x2)))
       a=1;
     
     if(b1<=max(y1,y2) && b1>=min(y1,y2))
       b=1;
    
    if(b && a)
      return 1;
   
  }
  

  return 0;

}

int main()
{
  ull t;
  in(t);
  while(t--)
  {
     ull x[100][100];
     ull y[100][100];
     ull edges[100];
     ull polin[100];
     ull n,m;
   
     in(n);
     
     loop(i,0,n)
       {
          in(m);
          loop(j,0,m)
           {  in(x[i][j]);
              in(y[i][j]);
           } 
       }

   loop(i,0,n)//for each polygon
      {   ull tx=x[i][0]
          ull ty=y[i][0]
          polin[i]=0;
          

          loop(j,0,n)//to check present polygon against other polygons
           {  
             ull crossc=0;
               if(j==i)
                continue;

              loop(k,0,edges[j])//going to each edge of polygon
                {   ull x1,y1,x2,y2,a1,b1,a2,b2;
                   if(k==(edges[i]-1))//if the last point
                     {x1=x[j][k]; y1=y[j][k]; x2=x[j][0]; y2=y[j][0]; a1=tx; b1=ty; }

                   else
                     {x1=x[j][k]; y1=y[j][k]; x2=x[j][k+1]; y2=y[j][k+1]; a1=tx; b1=ty;}

                   if(ifcross(x1,y1,x2,y2,a1,b1))
                      crossc+=1;
                }  
               
               if(crossc%2==1)
                 polin[i]+=1;
              
           }
      }

      loop(i,0,n)
      {out(polin[i]); printf(" ");}
      
       br;
     
  }

  return 0;  
}

