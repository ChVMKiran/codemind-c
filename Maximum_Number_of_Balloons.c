#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,a=0,b=0,l=0,n=0,o=0,c=0;
    for(i=0;s[i];i++){
        if(s[i]=='a')a++;
        if(s[i]=='b')b++;
        if(s[i]=='l')l++;
        if(s[i]=='n')n++;
        if(s[i]=='o')o++;
    }
    int x[10]={a,b,l/2,n,o/2},m=a;
    for(i=0;i<5;i++){
        if(x[i]<m){
            m=x[i];
        }
    }
    printf("%d",m);
}