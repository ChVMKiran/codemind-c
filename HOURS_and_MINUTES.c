#include<stdio.h>
int main()
{
    int m,H,M;
    scanf("%d",&m);
    H=m/60;
    M=m%60;
    printf("%d Hour(s) %d Minute(s)",H,M);
}