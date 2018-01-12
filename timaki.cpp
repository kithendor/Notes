#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	printf("%d",tm.tm_wday);
}
