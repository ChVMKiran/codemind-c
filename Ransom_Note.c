#include<stdio.h>
int main()
{
    int a=1,b,c[1000]={0},c1[1000]={0},i,j;
    char str[1000],str1[1000];
    scanf("%s%s",&str,&str1);
    for(i=0;str[i];i++)
    {
        c[str[i]]++;
    }
    for(i=0;str1[i];i++)
    {
        c1[str1[i]]++;
    }
    for(i=65;i<=122;i++)
    {
        if(c1[i]>=c[i])
        {
            a=1;
        }
        else
        {
            a=0;
            break;
        }
    }
    if(a==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}