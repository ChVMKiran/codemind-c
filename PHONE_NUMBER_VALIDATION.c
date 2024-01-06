#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int a,i,n;
    if(s[0]!='0'&&strlen(s)==10){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}