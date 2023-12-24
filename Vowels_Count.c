#include<stdio.h>
int main()
{
    int i,a=0;
    char ch[1000];
    scanf("%[^
]",&ch);
    for(i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            a++;
            continue;
        }
        
    }
    printf("%d",a);
}