#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,f,g,h,i,j,k=0,l,p,q;
    scanf("%d",&a);
    for(i=a+1;i>0;i++)
    {
        b=i;
        e=0;
        while(b!=0)
        {
            c=b%10;
            b=b/10;
            e=e*10+c;
        }
       if(e==i)
            {
               f=i;
               break;
            }
    }
    for(j=a-1;j>0;j--)
    {
        g=j;
        k=0;
        while(g!=0)
        {
            h=g%10;
            g=g/10;
            k=k*10+h;

        }
        if(k==j)
        {
            l=k;
            break;
        }
    }
    p=a-l;
    q=f-a;

    if(p<q)
    {
        printf("%d",l);
    }
    else if(p>q)
    {
        printf("%d",f);
    }
    else if(p==q)
    {
        printf("%d %d",l,f);
    }
}