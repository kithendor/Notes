#include <stdio.h>

int prime(int a)
{
	int ele;
	ele = 1;
	for(int i = 2;i<=a-1;i++)
	{
		if(a%i==0)
		{
			ele = 0;
		}
	}
	return ele;
}

int main()
{	
	int num;
	printf("dose");
	scanf("%d",&num);	
	printf("%d",(prime(num)));
}
