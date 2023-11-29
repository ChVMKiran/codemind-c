#include<stdio.h>
int main(){
    int t,n,i,j,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        c=0;
        for(j=0;j<=n;j++){
            if(n==j*j){
                c++;
                break;
            }
        }
        if(c==0){
            printf("False
");
        }
        else{
            printf("True
");
        }
    }
}