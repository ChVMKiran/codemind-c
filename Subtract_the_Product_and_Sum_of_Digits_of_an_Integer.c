#include<stdio.h>
int main(){
    int n,i,j,p=1,s=0;
    scanf("%d",&n);
    int a=n;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    while(a!=0){
        p*=a%10;
        a/=10;
    }
    printf("%d",p-s);
}