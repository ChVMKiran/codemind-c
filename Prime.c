#include<stdio.h>
int main(){
    int x,i=2,c=0;
    scanf("%d",&x);
    while(i<x){
        if(x%i==0){
            c+=1;
        }
        i++;
    }
    if(c==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}