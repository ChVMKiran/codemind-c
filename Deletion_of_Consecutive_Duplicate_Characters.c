#include<stdio.h>
int main(){
    int i,j,n,c;
    scanf("%d",&n);
    char s[100];
    for(i=0;i<n;i++){
        scanf("%s",s);
        c=0;
        for(j=0;s[j]!=0;j++){
            if(s[j]==s[j+1]){
                c++;
            }
        }
        printf("%d
",c);
    }
}