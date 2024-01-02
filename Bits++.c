#include<stdio.h>
int main(){
    int x=0,n,i;
    scanf("%d",&n);
    char s[100];
    for(i=0;i<n;i++){
        scanf("%s",&s);
        if(s[0]=='+'){
            ++x;
        }
        else if(s[2]=='+'){
            x++;
        }
        else if(s[0]=='-'){
            --x;
        }
        else if(s[2]=='-'){
            x--;
        }
    }
    printf("%d",x);
}