#include<stdio.h>
int main(){    
    int x=0,y=0,i;  
    char s[20];     
    scanf("%s",s);    
    for(i=0;s[i]!=NULL;i++){  
        if(s[i]=='z'){        
            x++;       
        }
        else{
            y++;
        }
    }
    if(2*x==y){
        printf("Yes");
    }
    else{ 
        printf("No");
    }
}