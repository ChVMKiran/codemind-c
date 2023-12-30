#include<stdio.h>
int main(){
    int n,b,c=0,d=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i]&&j!=i){
                b++;
            }
        }
        if(b==0&&d<a[i]){
            d=a[i];
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
    else{
        printf("%d",d);
    }
}