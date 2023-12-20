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
            if(a[j]>=e){
                e=a[j];
            }
        }
    }
    if(e==0){
        printf("-1");
    }
    else{
        printf("%d",e);
    }
}