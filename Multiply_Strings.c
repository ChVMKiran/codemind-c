#include<stdio.h>
int main(){
    char a[100],b[100];
    long long int i=0,m=0,n=0;
    scanf("%s%s",a,b);
    while(a[i]!=NULL){
        m=m*10+a[i]-'0';
        i++;
    }
    i=0;
    while(b[i]!=NULL){
        n=n*10+b[i]-'0';
        i++;
    }
    printf("%lld",m*n);
}