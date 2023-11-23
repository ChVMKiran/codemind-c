#include<stdio.h>
int main(){  
    int x,y; 
    scanf("%d%d",&x,&y);   
    if(x>y){ 
        printf("%d",x-y); 
    }    
    else{  
        printf("0");
    }
}