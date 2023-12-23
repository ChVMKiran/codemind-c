#include<stdio.h>
int main(){
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++){
        if(s>a[i]){
            s=a[i];
        }
    }
    printf("%d",s);
}