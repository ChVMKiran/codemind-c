#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    if(x>5 && x%5!=0){
        printf("%d",x/5+1);
    }
    else if(x>5 && x%5==0){
        printf("%d",x/5);
    }
    else{
        printf("%d",1);
    }
}