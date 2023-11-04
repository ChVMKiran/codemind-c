#include<stdio.h>
int main(){
    int m,n,c=0;
    scanf("%d%d",&m,&n);
    int i=m;
    while(i<=n){
        if(i%3==0){
            c++;
        }
        i++;
    }   
    printf("%d",c);
}