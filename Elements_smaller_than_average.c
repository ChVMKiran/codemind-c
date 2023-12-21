#include<stdio.h>
int main(){
    int n,x=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=s/n){
            x++;
        }
    }
    printf("%d",x);
}