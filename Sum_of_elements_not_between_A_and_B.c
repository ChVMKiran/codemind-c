#include<stdio.h>
int main()
{
    int b,c,d,i,x,y,e=0,k,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
   
    for(j=0;j<b;j++)
    {
        if(a[j]<x||a[j]>y)
        {
            e+=a[j];
        }
    }
    printf("%d",e);
}