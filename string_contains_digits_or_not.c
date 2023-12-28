#include<stdio.h>
int main(){
    int n,c,i,j;
    scanf("%d",&n);
    char s[1000];
    for(i=0;i<n;i++){
        scanf("%s",s);
        c=0;
        for(j=0;s[j]!=NULL;j++){
            if(s[j]>='0'&&s[j]<='9'){
                c++;
                break;
            }
        }
        if(c==0){
            printf("No
");
        }
        else{
            printf("Yes
");
        }
    }
}