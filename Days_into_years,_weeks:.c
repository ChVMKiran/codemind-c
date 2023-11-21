#include<stdio.h>
int main()
{
    int days,y,w;
    scanf("%d",&days);
    y=days/365;
    w=(days%365)/7;
    printf("%d
",y);
    printf("%d",w);
}