#include<stdio.h>
int main()
{
    int i,a=1;
    char ch[1000];
    scanf("%[^
]",&ch);
    for(i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]==' ')
        {
            a++;
            continue;
        }
        
    }
    printf("%d",a);
}