#include<stdio.h>
int main(){
    int n,i=2,j=2,l,h;
    scanf("%d",&n);
    while(i<n){
        i*=2;
    }
    j=i/2;
    if(n-j<i-n){
        printf("%d",n-j);
    }
    else{
        printf("%d",i-n);
    }
}