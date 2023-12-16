#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    float s=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%.2f",s/n);
}