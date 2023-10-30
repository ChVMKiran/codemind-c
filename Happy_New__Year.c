#include<stdio.h>
int main(){
    int h,m;
    scanf("%d%d",&h,&m);
    printf("%d",1440-((h*60)+m));   
}