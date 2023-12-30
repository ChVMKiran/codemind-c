#include<stdio.h>
int main(){
    int i,n,b,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i]){
                b++;
            }
        }
        if(b==1){
            printf("%d ",a[i]);
        }
    }
}