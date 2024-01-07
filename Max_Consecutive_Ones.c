#include<stdio.h>
int main()
{
    int n,c=0,i,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            c++;
        }
        if(a[i]==0||i==n-1)
        {
            if(m<c)
            {
                m=c;
                c=0;
            }
        }
        
    }
        printf("%d ",m);
}