#include<stdio.h>
int main(){   
    int u;  
    float b,t;  
    scanf("%d",&u);
    if(u<200){   
        b=u*1.2;   
    }    
    else if(u>=200 and u<400){   
        b=u*1.5;
    } 
    else if(u>=400 and u<600){
        b=u*1.8;    
    }   
    else{  
        b=u*2.0; 
    }   
    if(b>400){  
        t=1.15*b;  
    }    
    else{
        t=b+100; 
    }   
    printf("%.2f",t);
}