#include<stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    float c=float(a)/x,d=float(b)/y;
    if(c<d){
        printf("Walter");
    }
    else if(c==d){
        printf("Both");
    }
    else{
        printf("Jesse");
    }
}