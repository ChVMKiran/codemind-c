#include<stdio.h>
int main(){
    int b,n,i,j,u=0;
    scanf("%d",&n);
    while(n!=0){
        u=0;
        i=n%10;
        n/=10;
        b=n;
        while(b!=0){
            j=b%10;
            b/=10;
            if(i==j){
                u++;
                break;
            }
        }
        if(u!=0){
            break;
        }
    }
    if(u==0){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}