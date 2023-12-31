#include<stdio.h>
int main(){
    int a,b,i,j,k,m,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        char s[m];
        scanf("%s",s);
        for(j=0;j<m;j++){
            a=0;
            b=0;
            for(k=0;k<m;k++){
                if(s[j]==s[k]&&j!=k){
                    a++;
                }
            }
            if(a==0){
                printf("%c
",s[j]);
                b++;
                break;
            }
        }
        if(b==0){
            printf("-1
");
        }
    }
}