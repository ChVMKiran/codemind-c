#include<stdio.h>
int main(){
    int n,i,b,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        while(a[i]!=0){
            b++;
            a[i]/=10;
        }
        if(b%2==0){
            c++;
        }
    }
    printf("%d",c);
}