#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a,c=0;
    while(b!=0){
        b/=10;
        c++;
    }
    d=pow(10,c);
    if(a==(a*a)%d){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}