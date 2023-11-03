#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    while(n>=1){
        s=s+n%10;
        n/=10;
    }
    printf("%d",s);
}