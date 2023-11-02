#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(1500-2*a-4*(a+b)>1500-4*b-2*(a+b)){
        printf("%d",1500-2*a-4*(a+b));
    }
    else{
        printf("%d",1500-4*b-2*(a+b));
    }
}