#include<stdio.h>
int main(){
    int n,i,j,s=0,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i*i;
    }
    for(j=1;j<=n;j++){
        t+=j;   
    }
    printf("%d",t*t-s);
}