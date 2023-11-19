#include <stdio.h>
int main()
{
	int a,b,i,temp,result;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
	temp = i;
	result = 1;
	if (i > 0)
	{
		while (temp > 0 && result == 1)
		{
			if (((temp % 10) == 0) || ((i % (temp % 10)) != 0))
			{
				result = 0;
			}
			else
			{
				temp = temp / 10;
			}
		}
	}
	else
	{
		result = 0;
	}
	if (result == 1)
	{
		printf("%d ",i);
	}
}
	return 0;
}