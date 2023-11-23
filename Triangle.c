#include<stdio.h>
int main(){ 
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); 
    if(a==b & b==c){      
        printf("Equilateral triangle"); 
    }  
    else if(a==b or b==c or c==a){ 
        printf("Isosceles triangle"); 
    }  
    else{
        printf("Scalene triangle");
    }
}