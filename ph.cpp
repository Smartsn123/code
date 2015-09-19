#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{ 
  float Va,Ca,Vb,Cb;
  float Hconc, pH;
  printf("Give the values of  Va, Ca , Vb , Cb separated by space\n");
  
   scanf("%f %f %f %f",&Va,&Ca,&Vb,&Cb);
  
  Hconc=(Va*Ca-Vb*Cb)/(Va+Vb) ;
  pH=-log2(Hconc);
  
  printf("Hconc = %f and pH = %f\n",Hconc,pH);
  return 0;
}
