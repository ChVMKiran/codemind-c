#include<stdio.h>
int main(){
    int m,n,i,j,sum1=0,sum2=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum1+=i;
        }
    }
    for(j=1;j<m;j++){
        if(m%j==0){
            sum2+=j;
        }
    }
    if(sum1==m && sum2==n){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}