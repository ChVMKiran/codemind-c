#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n;
    while(n>10){
        n=n/10;
    }
    printf("%d",n+m%10);
}