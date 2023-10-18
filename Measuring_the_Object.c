#include<stdio.h>
int main(){
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x or w==y or w==z or w==x+y or w==y+z or w==z+x or w==x+y+z){
        printf("YES");
    }
    else{
        printf("NO");
    }
}