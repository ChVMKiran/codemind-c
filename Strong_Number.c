#include<stdio.h>
int main(){
    int t,a,i,n,j,b,s=0,f=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        s=0;
        f=1;
        scanf("%d",&a);
        n=a;
        while(n!=0){
            b=n%10;
            n/=10;
            f=1;
            for(j=1;j<=b;j++){
                f*=j;
            }
            s+=f;
        }
        if(s==a){
            printf("Strong
");
        }
        else{
            printf("Not Strong
");
        }
    }
}