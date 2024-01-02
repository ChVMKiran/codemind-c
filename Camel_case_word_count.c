#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,c=1;
    for(i=1;s[i];i++){
        if(s[i]>='A'&&s[i]<='Z'){
            c++;
        }
    }
    printf("%d",c);
}