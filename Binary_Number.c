#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,i,j;
    scanf("%d",&a);
    int arr[a];
    b=pow(2,a);
    for(i=0;i<b;i++){
        c=0;
        d=b/2;
        j=i;
        while(c!=a){
            arr[c]=j%2;
            j/=2;
            c++;
        }
        for(e=a-1;e>=0;e--){
            printf("%d",arr[e]);
        }
        printf("
");
    }
}