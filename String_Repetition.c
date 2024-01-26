#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    long long int n,i,b=0,c;
    scanf("%lld",&n);
    for(i=0;s[i];i++){
        if(s[i]=='a'){
            b++;
        }
    }
    c=b*(n/strlen(s));
    for(i=0;i<n%strlen(s);i++){
        if(s[i]=='a'){
            c++;
        }
    }
    printf("%lld",c);
}