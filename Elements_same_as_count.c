#include<stdio.h>
int main(){
    int n,i,j,e=0;
    scanf("%d",&n);
    int a[n],c[n]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    for(i=1;i<n;i++){
        if(c[i]==i){
            printf("%d ",a[i-1]);
            e++;
        }
    }
    if(e==0){
        printf("-1");
    }
}