#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,d,e=0,i,j,f=0;
    char str[1000];
    scanf("%[^
]",&str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            a++;
        }
        b++;
    }
  d=a;
   for(i=0;i<=d;i++)
    {
        c=0;
        e=0;
    for(j=b-1;j>=0;j--)
    {
        if(str[j]==' ')
        {
            c++;
            
        }
        if(c==a&&str[j]>=65&&str[j]<=122||str[j]==39&&str[j+1]>=65&&str[j+1]<=122&&c==a)
        {
            printf("%c",str[j]);
            e++;
        }
    }
    if(a!=0)
    {
        printf(" ");
    }
      a--;
   
    }
}