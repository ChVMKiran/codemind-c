#include<stdio.h>
int main(){
    int n,i=1,j=1;
    scanf("%d",&n);
    while(i<=n){
        j*=i;
        i++;
    }
    printf("%d",j);
}