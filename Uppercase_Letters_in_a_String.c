#include<stdio.h>
int main(){
    char s[1000];
    scanf("%[^
]",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            c++;
        }
    }
    printf("%d",c);
}