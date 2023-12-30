#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",&s);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]!='.'){
            printf("%c",s[i]);
        }
        else{
            printf("[.]");
        }
    }
}