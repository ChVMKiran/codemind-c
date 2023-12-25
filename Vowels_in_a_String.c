#include<stdio.h>
int main(){
    char s[1000],v;
    scanf("%[^
]%s",&s,&v);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]==v){
            printf("True
%d",i);
            c++;
            break;
        }
    }
    if(c==0){
        printf("False");
    }
}