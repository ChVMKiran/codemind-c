#include<stdio.h>
int main(){
    int n,i,k,r=0;
    scanf("%d",&n);
    if(n<0){
        k=-n;
    }
    else{
        k=n;
    }
    while(k>0){
        r=r*10+k%10;
        k/=10;
    }
    if(n>0){
        printf("%d",r);
    }
    else{
        printf("%d",-r);
    }
}