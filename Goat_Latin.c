#include<stdio.h>
int main(){
    char s[1000],c[1000];
    scanf("%[^
]",s);
    int a,b=1,d=2,e,f,i,j,k;
    for(i=0;s[i]!=NULL;i++){
        j=0;
        e=0;
        f=i;
        while(s[f]!=' '&&s[f]!=NULL){
            c[j]=s[f];
            j++;
            f++;
            i++;
            e++;
        }
        if(c[0]=='a'||c[0]=='e'||c[0]=='i'||c[0]=='o'||c[0]=='u'||c[0]=='A'||c[0]=='E'||c[0]=='I'||c[0]=='O'||c[0]=='U'){
            for(k=0;k<e;k++){
            printf("%c",c[k]);
        }
        }
        else{
            for(k=1;k<e;k++){
                printf("%c",c[k]);
            }
            printf("%c",c[0]);
        }
        printf("m");
        for(k=0;k<d;k++){
            printf("a");
        }
        printf(" ");
        d++;
        if(s[i]==NULL){
            break;
        }
    }
}