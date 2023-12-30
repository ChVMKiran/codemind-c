#include<stdio.h>
int main(){
    int i,j,m=0,n,b,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(m<a[i]){
            m=a[i];
        }
    }
    for(i=m;i>0;i--){
        b=0;
        for(j=0;j<n;j++){
            if(a[j]%i==0){
                b++;
            }
        }
        if(b==n){
            printf("%d",i);
            break;
        }
    }
}