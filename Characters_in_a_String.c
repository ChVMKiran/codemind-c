#include<stdio.h>
int main(){
    char s[1000];
    int n=0;
    scanf("%[^
]",&s);
    for(int i=0;s[i]!=NULL;i++){
        n++;
    }
    printf("%d",n);
}