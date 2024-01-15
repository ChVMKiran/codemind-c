#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,e,b;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(a[i]+e>=a[j]){
                b++;
            }
        }
        if(b==n){
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}