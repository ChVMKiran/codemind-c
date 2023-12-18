#include<stdio.h>
int main(){
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],s=0;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }
    printf("%d",s);
}