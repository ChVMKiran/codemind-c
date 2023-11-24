#include<stdio.h>
int main(){ 
    int n,i,j,p=1,s=0; 
    scanf("%d",&n);  
    while(n!=0){      
        s+=n%10;  
        p*=n%10;
        n/=10;  
    }  
    printf("%d",p-s);
}