#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,u=0,d=0,r=0,l=0;
    for(i=0;s[i];i++){
        if(s[i]=='U'){
            u++;
        }
        else if(s[i]=='D'){
            d++;
        }
        else if(s[i]=='L'){
            l++;
        }
        else{
            r++;
        }
    }
    if(u==d&&l==r){
        printf("True");
    }
    else{
        printf("False");
    }
}