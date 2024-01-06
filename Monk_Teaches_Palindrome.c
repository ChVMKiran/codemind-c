#include<stdio.h>
#include<string.h>
int main(){
    int a,b,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a=0;
        char s[100];
        scanf("%s",s);
        b=strlen(s);
        for(j=0;j<b/2;j++){
            if(s[j]!=s[b-j-1]){
                a++;
                break;
            }
        }
        if(a!=0){
            printf("NO
");
        }
        else{
            printf("YES ");
            if(b%2==0){
                printf("EVEN
");
            }
            else{
                printf("ODD
");
            }
        }
    }
}