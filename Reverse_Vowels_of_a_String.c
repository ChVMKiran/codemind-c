#include<stdio.h>
int main(){
    char s[1000],v[100];
    scanf("%s",s);
    int i,j=0;
    for(i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v[j]=s[i];
            j++;
        }
    }
    for(i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            printf("%c",v[j-1]);
            j--;
        }
        else{
            printf("%c",s[i]);
        }
    }
}