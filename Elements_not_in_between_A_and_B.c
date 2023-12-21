#include<stdio.h>
int main(){
    int n,x,y,e=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++){
        if(a[i]<x||a[i]>y){
            printf("%d ",a[i]);
            e++;
        }
    }
    if(e==0){
        printf("-1");
    }
}