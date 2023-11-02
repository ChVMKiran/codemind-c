#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0){
        if(n%5==0){
            printf("PlingPlang");
        }
        else if(n%7==0){
            printf("PlingPlong");
        }
        else{
            printf("Pling");
        }
    }
    else if(n%5==0){
        if(n%3==0){
            printf("PlingPlang");
        }
        else if(n%7==0){
            printf("PlangPlong");
        }
        else{
            printf("Plang");
        }
    }
    else if(n%7==0){
        if(n%3==0){
            printf("PlingPlong");
        }
        else if(n%5==0){
            printf("PlangPlong");
        }
        else{
            printf("Plong");
        }
    }
    else{
        printf("%d",n);
    }
    }