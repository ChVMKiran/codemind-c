#include<stdio.h>
int main(){
    int n,p=0;
    scanf("%d",&n);
    int m=n*n;
    while(m>0){
        p+=m%10;
        m/=10;
    }
    if(p==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}