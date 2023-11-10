#include<stdio.h>
int main(){
    int n,i,r=0;
    scanf("%d",&n);
    int k=n;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    if(r==k){
        printf("True");
    }
    else{
        printf("False");
    }
}