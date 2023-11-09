#include<stdio.h>
int main(){
    int n,i,j,s=0,p=1;
    scanf("%d",&n);
    while(n>0){
        j=n%10;
        s+=j;
        p*=j;
        n/=10;
    }
    if(s==p){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}