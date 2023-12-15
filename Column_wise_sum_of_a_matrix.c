#include<stdio.h>
int main(){
    int m,n,i,j,s;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<m;j++){
            s+=a[j][i];
        }
        printf("%d ",s);
    }
}