#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int a,i;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]%2!=0){
            a=s[i]-'0';
            printf("%d",a*a);
        }
    }
}