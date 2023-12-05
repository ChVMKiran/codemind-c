#include<stdio.h>
int main(){
    int a,n,x;
    scanf("%d%d",&n,&x);
    a=n-x;
    if(x%2!=0&&a%2!=0)
    {
        printf("YES");
    }
    else if(x%2==0&&a%2==0)
    {
        printf("YES");
    }
    else if(n%2==0&&x%2==0)
    {
        printf("YES");
    }
    else if(n%2!=0&&x%2!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}