#include<stdio.h>
int main(){
    int i,k,n,c=0;
    scanf("%d",&n);
    int a[n],b[n]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    scanf("%d",&k);
    for(i=1;i<=n;i++){
        if(b[i]==k){
            printf("%d ",i);
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
}