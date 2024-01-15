#include<stdio.h>
int main(){
    int n,i,j,b,c;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;;i++){
            b=0;
            for(j=0;j<n;j++){
                if(i==a[j]){
                    b++;
                }
            }
            if(b==0){
                c=i;
                break;
            }
        }
        printf("%d
",c);
}