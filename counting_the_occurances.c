#include<stdio.h>
int main(){
    char s[1000],c;
    scanf("%[^
]",s);
    scanf("%s",&c);
    int i,a=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]==c){
            a++;
        }
    }
    if(a!=0){
        printf("%d",a);
    }
    else{
        printf("-1");
    }
}