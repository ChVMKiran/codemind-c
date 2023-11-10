#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,c=1,r=0,m=0,o,b,p;
    scanf("%d",&n);
    o=n;
    while (n!=0){
        a=n%10;
        r=r*10+a;
        n/=10;
    }
    while (r!=0){
       b=r%10;
      p=pow(b,c);
       c++;
       m+=p;
       r/=10;
    }
    if(o==m){
        printf("True");
        
    }
    else{
        printf("False");
    }
}