#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    float z=(x-y)*100.0/x;   
    printf("%.2f",z);
}