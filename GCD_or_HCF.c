#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(b>a){
        for(i=b;i>=1;i--){
            if(a%i==0 && b%i==0){
                printf("%d",i);
                break;
            }
        }
    }
    else{
        for(i=a;i>=1;i--){
            if(a%i==0 && b%i==0){
                printf("%d",i);
                break;
            }
        }
    }
}