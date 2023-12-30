#include<stdio.h>
#include<math.h>
int main(){
    int b,i,j,s=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=pow(2,n-1);
    for(i=0;i<n;i++){
        s+=a[i]*b;
        b/=2;
    }
    printf("%d",s);
}