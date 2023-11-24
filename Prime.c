#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    i=2;
    while(i<n){
        if(n%i==0){
            c++;
            printf("Not Prime");
            break;
        }
        i++;
    }
    if(c==0){
        printf("Prime");
    }
}