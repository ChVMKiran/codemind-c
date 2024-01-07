#include<stdio.h>
int  main(){
    int b,n,i,c=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            c++;
        }
        if(a[i]==0||i==n-1){
            b=c;
            c=0;
            if(m<b){
                m=b;
            }
        }
    }
    printf("%d",m);
}