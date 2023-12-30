#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]",s);
    int i,j,b=0,c=0,d,e=0,f;
    for(i=0;s[i]!=0;i++){
        if(s[i]==' '){
            c++;
        }
        b++;
    }
    d=c;
    f=c;
    for(i=0;i<=d;i++){
        e=0;
        for(j=0;s[j]!=NULL;j++){
            if(s[j]==' '){
                e++;
            }
            if(e==f&&s[j]!=' '){
                printf("%c",s[j]);
            }
        }
        printf(" ");
        f--;
    }
}