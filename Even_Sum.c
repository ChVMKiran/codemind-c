#include<stdio.h>
int main(){
    int t,i,s=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            s+=a[i];
        }
    }
    printf("%d",s);
}