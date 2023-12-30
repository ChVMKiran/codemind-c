#include<stdio.h>
int main(){
    char s[10000];
    int n,i,j,b=0,c=0;;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        b=0,c=0;
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++){
            if(s[i]>='0'&&s[i]<='9'){
                c++;
            }
            b++;
        }
        if(b==c){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}