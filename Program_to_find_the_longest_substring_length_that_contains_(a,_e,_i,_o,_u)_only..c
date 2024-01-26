#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,a=0,b=0;
    for(i=0;s[i];i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        while(s[i]){
            b++;
            i++;
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
                break;
            }
        }
        if(b>a){
            a=b;
            b=0;
        }
    }
}
printf("%d",a);
}