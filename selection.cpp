#include <stdio.h>

int main()
{
	int a[] = {64, 14, 28, 78, 2, 11, 80};
	int n = 7;
	int i, j, min_idx,temp;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
    	min_idx = i;
        // Find the minimum element in unsorted array
        for (j = i+1; j < n; j++)
        {
        	if (a[j] < a[min_idx])
            	min_idx = j;
		}     
 
        // Swap the found minimum element with the first element
        		temp = a[min_idx];
				a[min_idx] = a[i];
				a[i]=temp;
    }
    
    for(i=0;i<n;i++)
    	printf("%d\n",a[i]);

}
