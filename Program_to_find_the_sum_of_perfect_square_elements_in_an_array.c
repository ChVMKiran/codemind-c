#include<stdio.h>
#include<math.h>
int main(){
    int i,b=0,c,d,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c=sqrt(a[i]);
        if(c*c==a[i]){
            b+=a[i];
        }
    }
    printf("%d",b);
}