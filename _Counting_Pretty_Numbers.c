#include<stdio.h>
int main(){
    int t,a,b,c=0,d,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++){
            if(j%10==2 || j%10==3 || j%10==9){
                c++;
            }
        }
        printf("%d
",c);
    }
}