#include<stdio.h>
int main(){
    int m,n,i,j,a,c=0;
    scanf("%d%d",&m,&n);
    int b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    scanf("%d",&a);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==a){
                printf("1");
                c++;
                break;
            }
        }
    }
    if(c==0){
        printf("0");
    }
}