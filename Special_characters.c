#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int a=0,b=0,i,e=0,f=0,g,h;
    for(i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9');
        else a++;
    }
    char c[1000],d[1000];
    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
        if(s[i]%2==0)
        {
            c[e]=s[i];
            e++;
        }
        if(s[i]%2!=0)
        {
            d[f]=s[i];
            f++;
        }
        }
    }
    g=e<f?e:f;
    h=e>f?e:f;
    if(a%2==0){
        for(i=0;i<e;i++){
        	if(c[i]!=NULL){
            printf("%c",c[i]);
        	}
            if(d[i]!=NULL){
            printf("%c",d[i]);
            }
        }
        for(i=e;i<f;i++){
            if(d[i]!=NULL){
            printf("%c",d[i]);
            }
        }
    }
    else{
        for(i=0;i<e;i++){
        	if(d[i]!=NULL){
            printf("%c",d[i]);
        	}
            if(c[i]!=NULL){
            printf("%c",c[i]);
            }
        }
        for(i=e;i<f;i++){
            if(d[i]!=NULL){
            printf("%c",d[i]);
            }
        }
    }
}