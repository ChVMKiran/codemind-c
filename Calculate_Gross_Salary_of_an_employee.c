#include<stdio.h>
int main()
{
    float salary,HRA,DA,pf,G;
    scanf("%f%f%f",&salary,&HRA,&DA);
    pf=(12/100.0)*salary;
    G=salary+HRA+DA+pf;
    printf("%.2f
",pf);
    printf("%.2f",G);
}