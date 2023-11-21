#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    float ci=p*pow((1+r/100.0),t)-p;  
    printf("%.2f",ci);
}