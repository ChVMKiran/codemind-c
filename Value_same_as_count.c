#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b,c[100]={0},d=0,e=0,i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                b++;
            }
        }
        if(b==a[i]){
            c[b]++;
            d++;
        }
    }
    for(i=0;i<d;i++){
        if(c[i]!=0){
            e++;
        }
    }
    printf("%d",e);
}