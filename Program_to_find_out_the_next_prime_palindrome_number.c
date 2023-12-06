#include<stdio.h>
int main(){
    int n,a,b,i,j,c=0,r=0;
    scanf("%d",&n);
    for(i=n+1;;i++){
        c=0;
        r=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                c++;
                break;
            }
        }
        if(c==0){
            b=i;
            while(b!=0){
                a=b%10;
                r=r*10+a;
                b/=10;
            }
            if(i==r){
                printf("%d",i);
                break;
            }
        }
    }
}