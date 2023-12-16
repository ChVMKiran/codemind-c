#include<stdio.h>
int main(){
    int i,j,n,c=0;
    scanf("%d",&n);
    int a[n];
    float s=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==int(s/n)){
            printf("True");
            c++;
            break;
        }
    }
    if(c==0){
        printf("False");
    }
}