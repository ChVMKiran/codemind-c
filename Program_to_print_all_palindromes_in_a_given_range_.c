#include<stdio.h>
int main(){
    int a,b,i,j,r=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        j=i;
        r=0;
        while(j!=0){
            r=r*10+j%10;
            j/=10;
        }
        if(r==i){
            printf("%d ",r);
        }
    }
}