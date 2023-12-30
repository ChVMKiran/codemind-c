#include<stdio.h>
int main(){
    int i,n,j,b,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                b++;
            }
        }
        if(b==0){
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
}