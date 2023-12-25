#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int n=strlen(s),i,b,c=0;
    if(n%2==0)b=n/2;
    else b=n/2+1;
    for(i=0;i<b;i++){
        if(s[i]!=s[n-i-1]){
            c++;
            break;
        }
    }
    if(c!=0){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
}