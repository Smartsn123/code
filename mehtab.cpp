#include<bits/stdc++.h>// this header file will include all other header file automatically
using namespace std;

//for given pattern say we have total lines =n , n must be odd
// think of NXN matrix now on the first line * is printed at mid(n/2 + 1 )
// for second line at mid-1 & mid+1
// so at ith line less than mid  mid-i and mid+i position
// after midth line  i-n/2  and n-(i-n/2)

int main()
{
   
   int n;
   cin>>n;
   int mid=n/2 ; // would be n/2 +1 for 1 based indexing but we have here 0 based indexing

   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
        { 
           if(i<=mid && j==mid-i || j== mid+i ) // if row is less than mid ,print * when column no gets value mid-i or mid+i 
           cout<<"* ";
   
      else  if(i>=mid && j==i-mid || j== n-(i-mid+1) ) //if row is more than mid,print * when column no gets value i-mid(poition in left) or n-(i-mid+1) (position in right)
           cout<<"* ";
          
         else
          cout<<"  ";
            
        }
        cout<<endl;//After priting each row you need to end the line
   }
}
