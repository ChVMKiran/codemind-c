#include<stdio.h>
int main(){
    int hf,sf,sp;
    scanf("%d%d%d",&hf,&sf,&sp);
    if(hf>50 && sf>60 && sp>100){
        printf("10");
    }
    else if(hf>50 && sf>60){
        printf("9");
    }
    else if(hf<=50 && sf>60){
        printf("8");
    }
    else if(hf>50 && sp>100){
        printf("7");
    }
    else if(hf>50 || sf>60 || sp>100){
        printf("6");
    }
    else{
        printf("5");
    }
}