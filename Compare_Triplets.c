#include<stdio.h>
int main(){
    int a[3],b[3],c=0,d=0,i;
    scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            c++;
        }
        else if(a[i]<b[i]){
            d++;
        }
    }
    printf("%d %d ",c,d);
}