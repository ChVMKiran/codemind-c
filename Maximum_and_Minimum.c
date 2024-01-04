#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j,c,d=0,e,f=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c==a[i]){
            b[f]=c;
            f++;
        }
    }
    if(f!=0)
    printf("%d %d",b[0],b[f-1]);
    else
    printf("-1");
}