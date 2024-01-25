#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int i=0,j;
    while(s[i]!=NULL){
        j=0;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            while(s[i]){
                i++;
                if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
                    break;
                }
                j++;
            }
            printf("V");
        }
        else{
            while(s[i]){
                i++;
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    break;
                }
                j++;
            }
            printf("C");
        }
    }
}