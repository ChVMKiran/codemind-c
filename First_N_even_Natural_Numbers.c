#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    i=2*n;
    while(i>=1){
        if(i%2==0){
            printf("%d ",i);
        }
        i--;
    }
}