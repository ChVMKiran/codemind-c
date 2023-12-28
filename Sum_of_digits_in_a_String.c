#include<stdio.h>
int main(){
    char s[1000];
    int i,m=0;
    scanf("%[^
]",s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>'0'&&s[i]<='9'){
            m+=s[i]-'0';
        }
    }
    printf("%d",m);
}