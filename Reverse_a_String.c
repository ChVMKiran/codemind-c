#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^
]",&s);
    int n=strlen(s),i;
    for(i=0;s[i]!=NULL;i++){
        printf("%c",s[n-i-1]);
    }
}