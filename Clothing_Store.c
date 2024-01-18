#include<stdio.h>
int main(){
    int n,i,j,b=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            if(j<i&&a[i]==a[j]){
                break;
            }
            else if(a[i]==a[j]){
                b++;
            }
        }
        c+=b/2;
    }
    printf("%d",c);
}