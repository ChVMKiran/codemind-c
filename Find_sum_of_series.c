#include<stdio.h>
int main(){
    int n,i=1;
    float sum=0;
    scanf("%d",&n);
    while(i<=n){
    sum+=1/float(i);
    i++;
    }
    printf("%.2f",sum);
}