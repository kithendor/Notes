#include <stdio.h>
#include <time.h>

int main()
{

	int num;
	
	printf("poso kanei 5 + 5??");
	clock_t t1 = clock();
	scanf("%d",&num);
	clock_t t2 = clock();
	
	int xronos = t2 - t1;
	
	

	printf(" %d sec",xronos);

}
