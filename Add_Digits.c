#include<stdio.h>
int main(){
    int n,p=0,s=0,k=0;
    scanf("%d",&n);
    while(n!=0){
        p+=n%10;
        n=n/10;
    }
    while(p!=0){
        s+=p%10;
        p=p/10;
    }
    if(s>9){
        while(s!=0){
        k+=s%10;
        s=s/10;
        }
        if(k<10){
            printf("%d",k);
        }
    }
    else{
        printf("%d",s);
    }
}