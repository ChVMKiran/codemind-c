#include<stdio.h>
int main(){
    int n,i,j,c,d=0,e=0;
    scanf("%d",&n);
    int a[n],b[n]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=1;i<n;i++){
        if(b[i]==i){
            d+=a[i-1];
            e++;
        }
    }
    if(e>0){
        printf("%.2f",(d*1.0)/(e*1.0));
    }
    else{
        printf("-1");
    }
}