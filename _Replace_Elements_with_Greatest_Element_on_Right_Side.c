#include<stdio.h>
int main(){
    int n,i,j,b,c,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        b=a[i+1];
        for(j=i+1;j<n;j++){
            if(a[j]>b){
                b=a[j];
            }
        }
        printf("%d ",b);
    }
    printf("-1");
}