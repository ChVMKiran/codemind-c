#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i+1;j>=1;j--){
            printf("%d ",i);
        }
        printf("
");
    }
}