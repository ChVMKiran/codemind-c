#include<stdio.h>
int main(){
    int m,n,i,j,e=0,o=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0){
                e+=a[i][j];
            }
            else{
                o+=a[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}