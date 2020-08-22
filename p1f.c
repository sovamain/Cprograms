#include<stdio.h>
int main (void){
 int k=2,n,m;
 printf("enter a +ve integer greater than 1:- ");
 scanf("%d",&n);
 m=n;
 do{
  if (n%k==0){
  n/=k;
  printf("%d,",k);}
  if (n==1) break;
  while(n%k!=0){
   if(k==2) k=3;
   else k+=2;}
 }while(n%k==0);
 printf("prime factors of %d\n.",m);
 return 0;
 }
