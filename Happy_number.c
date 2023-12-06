#include<stdio.h>
int main(){
 int i,j,n,t,s=0;
 scanf("%d",&n);
 s=n;
  while(s>9){
   s=0;
   while(n>0){
    j=n%10;
    s+=(j*j);
    n=n/10; 
  }
  n=s;
  }
  
 if(s==1||s==7){
     printf("True");
}
else{
     printf("False");
}
}