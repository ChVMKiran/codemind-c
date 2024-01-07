#include<stdio.h>
int main(){
    int b=0,c=0,i,j,n,l,s=0;
    scanf("%d%d",&n,&l);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>l){
            s++;
        }
        else{
            c++;
        }
        if(s>1){
            break;
        }
    }
    printf("%d",c);
}