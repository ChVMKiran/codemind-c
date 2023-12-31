#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,j,a=0,b=0;
    for(i=0;s[i]!=NULL;i++){
        a=0;
        for(j=0;s[j]!=NULL;j++){
            if(s[j]==s[i]&&j!=i){
                a++;
                break;
            }
        }
        if(a==0){
            printf("%d",i);
            b++;
            break;
        }
    }
    if(b==0){
        printf("-1");
    }
}