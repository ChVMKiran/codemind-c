#include<stdio.h>
int main(){
    int n,c,d=0,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                c++;
            }
        }
        printf("%d ",c);
    }
}