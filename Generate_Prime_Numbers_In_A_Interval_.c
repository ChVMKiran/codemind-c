#include<stdio.h>
int main(){
    int i,j,m,n,c=0;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<=n;i++){
        c=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                c++;
                break;
            }
        }
        if(c==0){
            printf("%d
",i);
        }
    }
}