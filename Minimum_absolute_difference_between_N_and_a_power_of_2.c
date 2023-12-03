#include<stdio.h>
int main(){
    int n,i=2,j=2,l,h;
    scanf("%d",&n);
    while(i<n){
        if(n<i){
        	break;
		}
        i*=2;
    }
    j=i/2;
    if(i-n<n-j){
        printf("%d",i-n);
    }
    else{
        printf("%d",n-j);
    }
}