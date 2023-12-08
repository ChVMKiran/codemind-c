#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,i;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==1){
        printf("%d %d",i,n/i);
    }
    else{
        printf("-1");
    }
}