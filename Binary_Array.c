#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,b=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]!=0&&a[i]!=1){
            b++;
        }
    }
    if(b==0){
        printf("True");
    }
    else{
        printf("False");
    }
}