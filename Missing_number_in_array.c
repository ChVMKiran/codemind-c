#include<stdio.h>
int main(){
    int t,n,i,j,k,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n-1];
        for(j=0;j<n-1;j++){
            scanf("%d",&a[j]);
        }
        for(j=1;j<=n;j++){
            b=0;
            for(k=0;k<n-1;k++){
                if(j==a[k]){
                    b++;
                }
            }
            if(b==0){
                c=j;
                break;
            }
        }
        printf("%d
",c);
    }
}