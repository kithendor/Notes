#include <stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void printArr(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}

void bubbleSort(int a[],int n)
{
	int temp;
	for (int i = 0; i < n-1; i++)  
	{
		for (int j = 0; j < n-i-1; j++) 
		{
			if (a[j] > a[j+1])
			{
			/*
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
				*/
				swap(&a[j], &a[j+1]);	
			}
			
              
		} 
		
	}      
       
}

int main()
{
	int arr[] = {64, 14, 28, 78, 2, 11, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printArr(arr,n);
}
