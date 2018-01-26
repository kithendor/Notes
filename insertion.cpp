#include <stdio.h>

int main()
{
	int a[] = {64, 14, 28, 78, 2, 11, 80};
 	int n=7;
    int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
    
    for(i=0;i<n;i++)
    	printf("%d\n",a[i]);

}
