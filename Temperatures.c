#include<stdio.h>
int main(){
    int n,i,j,k,c,e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        c=0;
        for(k=j+1;k<n;k++){
            if(a[j]<a[k]){
                e=k-j;
                printf("%d ",e);
                c++;
                break;
            }
        }
        if(c==0){
            printf("0 ");
        }
    }
}