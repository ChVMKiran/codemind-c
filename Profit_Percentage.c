#include<stdio.h>
int main(){
    int y,x;
    float z;
    scanf("%d%d",&y,&x);
    z=(x-y)*100.0/y;   
    printf("%.2f",z);
}