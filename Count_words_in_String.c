#include<stdio.h>
int main(){
    char s[1000];
    int wc=1,i;
    scanf("%[^
]",s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]==' '){
            wc++;
        }
    }
    printf("%d",wc);
}