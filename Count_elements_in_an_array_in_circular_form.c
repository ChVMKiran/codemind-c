#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n+2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[i]=a[0];
    a[i+1]=a[1];
    for(i=1;i<n+1;i++)
    {
        if(a[i-1]%2!=0 && a[i+1]%2==0)
        {
            c++;
        }
        if(a[i-1]%2==0 && a[i+1]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}