#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",&s);
    int i,j,c=0;
    for(i=0;s[i]!=NULL;i++){
        for(j=i+1;s[j]!=NULL;j++){
            if(s[j]==s[i]){
                c++;
            }
        }
    }
    if(c==0){
        printf("True");
    }
    else{
        printf("False");
    }
}