#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]",s);
    int i,m,n;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        printf("%c",s[i]);
    }
}