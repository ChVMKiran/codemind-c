#include<stdio.h>
int main(){
    int a,n,i,p=0;
    scanf("%d",&n);
    a=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            p+=i;
        }
    }
    if(a==p){
        printf("True");
    }
    else{
        printf("False");
    }
}