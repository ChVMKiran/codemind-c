#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int c=0,i;
    for(i=0;s[i]!=NULL;i++){
        c++;
    }
    printf("%d",c);
}