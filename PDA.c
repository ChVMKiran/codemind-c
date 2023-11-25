#include<stdio.h>
int main(){
    int n,s=0,i=1,a;
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            s+=i;
        }
        i++;
    }
    if(s==n){
        printf("PERFECT");
    }
    else if(s<n){
        printf("DEFICIENT");
    }
    else{
        printf("ABUNDANT");
    }
}