#include<stdio.h>
int main(){
    int t,i,j,k,row,col, a[10],b=0,d[100];;
    char s[10];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int l=0,c=0;
        for(j=0;j<8;j++){
            b=0;
            scanf("%s",s);
            for(k=0;s[k];k++){
                if(s[k]=='#'){
                    b++;
                    d[l]=k+1;
                    l++;
                }
            }
            a[c]=b;
            if(a[c]==2&&a[c-1]==1&&a[c-2]==2){
                row=c-1;
                col=d[l-3];
            }
            c++;
        }
        printf("%d %d
",row+1,col);
    }
}