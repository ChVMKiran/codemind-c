#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
    }
}