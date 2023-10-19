#include<stdio.h> 
int main(){
int u; 
float b,t,c; 
scanf("%d",&u); 
if(u<200){
    c=1.2;
    b=u*c;
}
else if(u>=200 and u<400){
    c=1.4;
    b=u*c;
}
else if(u>=400 and u<600){
    c=1.6;
    b=u*c;
}
else if(u>=600 and u<800){
    c=1.8;
    b=u*c;
}
else{
    c=2.0;
    b=u*c;
}
if(b>400){
    t=1.15*b;
}
else{
    t=b;
}
printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,t-b,t);
}