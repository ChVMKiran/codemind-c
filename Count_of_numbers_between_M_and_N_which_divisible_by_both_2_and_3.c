#include<stdio.h>
int main(){
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    i=a;
    while(i<=b){
        if(i%6==0){
            c++;
        }
        i++;
    }
    printf("%d",c);
}