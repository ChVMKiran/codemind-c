#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a, &b, &c);
double s = (a+b+c)/2.0;
double h = sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.4lf",h);
}
