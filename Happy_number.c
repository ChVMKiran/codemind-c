#include<stdio.h>
int main(){
    int n,i,s=o;
    scanf("%d",&n);
    while(n!=0 &&(n!=1 || n!=7)){
        i=n;
        while(i!=0){
            s+=i%10*i%10;
            i/=10;
        }
        s=n;
    }
    if(n==1||n==7){
        printf("True");
    }
    else{
        printf("False");
    }
}