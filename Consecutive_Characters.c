#include<stdio.h>
int main(){
    char s[1000];
    int a=1,b=1,i;
    scanf("%s",s);
    for(i=0;s[i];i++){
        if(s[i]==s[i+1]){
            a++;
        }
        else{
            a=1;
        }
        if(b<a){
            b=a;
        }
    }
    printf("%d",b);
}