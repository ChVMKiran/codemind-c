#include<stdio.h>
int main(){
    char s[1000];
    scanf("%[^
]",s);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
}