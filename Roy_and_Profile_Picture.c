#include<stdio.h>
int main(){
    int l,t,w,h,i;
    scanf("%d%d",&l,&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&w,&h);
        if(w<l || h<l){
            printf("UPLOAD ANOTHER
");
        }
        else{
            if(w>=l && h>=l && h==w){
                printf("ACCEPTED
");
            }
            else{
                printf("CROP IT
");
            }
        }
    }
}