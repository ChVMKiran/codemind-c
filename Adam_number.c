#include <stdio.h>
int main(){
int n,ns,r=0,rs=0,nsr=0;
scanf("%d",&n);
int b=n;
ns=n*n;
while(n!=0){
    r=r*10+n%10;
    n/=10;
}
rs=r*r;
while(ns!=0){
    nsr=nsr*10+ns%10;
    ns/=10;
}
if(nsr==rs&&b%10!=0){
    printf("True");
}
else{
    printf("False");
}
}