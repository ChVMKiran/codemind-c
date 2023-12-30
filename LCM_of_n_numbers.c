#include<stdio.h>
int main(){
    int b,c,n,i,j,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=a[0];;i++){
        b=0,c=0;
        for(j=0;j<n;j++){
            if(i%a[j]==0){
                b++;
            }
            c++;
        }
        if(b==c){
            printf("%d",i);
            break;
        }
    }
}