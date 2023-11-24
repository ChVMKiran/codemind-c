#include<stdio.h>
int main(){
    int n,e=0,o=0,a;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        if(a%2==0){
            e++;
        }
        else{
            o++;
        }
        n/=10;
    }
    if(o==0){
        printf("Even");
    }
    else if(e==0){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}