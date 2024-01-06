#include<stdio.h>
int main(){
    int i,b=0,c=0;
    char s[1000];
    scanf("%s",&s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            b=0;
        }
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            b++;
        }
        if(c<b){
            c=b;
        }
    }
    printf("%d",c);
}