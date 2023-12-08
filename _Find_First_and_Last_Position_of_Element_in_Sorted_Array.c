#include<stdio.h>
int main(){
    int i,j,n,k=0,l=0,e,f,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(j=0;j<n;j++){
        if(a[j]==x){
            e=j;
            k++;
            break;
        }
    }
    for(j=n-1;j>=0;j--){
        if(a[j]==x){
            f=j;
            l++;
            break;
        }
    }
    if(k==0&&l==0){
        printf("-1 -1");
    }
    else{
        printf("%d %d",e,f);
    }
}