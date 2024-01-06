#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    scanf("%s%s",&s1,&s2);
    strcat(s1,s2);
    for(i=65;i<123;i++){
        for(j=0;s1[j]!=NULL;j++){
            if(s1[j]==i){
                printf("%c",s1[j]);
            }
        }
    }
}