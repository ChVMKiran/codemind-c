#include<stdio.h>
#include<math.h>
int main(){
    int n,x,a,m;
    scanf("%d%d",&n,&x);
    a=pow(10,x);
    m=n%a;
    while(n>=a){
        n/=10;
    }
    printf("%d",abs(m-n));
}