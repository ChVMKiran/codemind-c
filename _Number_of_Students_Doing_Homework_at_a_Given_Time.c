#include<stdio.h>
int main(){
    int i,j,a=0,n,q;
    scanf("%d",&n);
    int s[n],e[n];
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&e[i]);
    }
    scanf("%d",&q);
    for(i=0;i<n;i++){
        if(q>=s[i]&&q<=e[i]){
            a++;
        }
    }
    printf("%d",a);
}