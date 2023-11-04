#include<stdio.h>
int main(){
	int m,n,lcm=1;
	scanf("%d%d",&m,&n);
	while(1){
		if(lcm%n==0&lcm%m==0){
			break;
		}
		lcm++;
	}
	printf("%d",lcm);
}