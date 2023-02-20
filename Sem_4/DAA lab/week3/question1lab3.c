#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int a[], int n )
{
	int opcount = 0 ;
	for (int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j] ;
				a[j] = a[j+1] ;
				a[j+1] = temp ;
			}
			opcount++ ;
		}
	}
	printf("%d",opcount) ;
}
void Display(int arr[] , int size)
{
	for(int i = 0 ; i<size ; i++)
	{
		printf("%d\t",arr[i]) ;
	}
	printf("\n") ;
}
int main ()
{
	int arr[6] = {1,5,4,3,2,1} ;
	bubbleSort(arr , 6) ;
	Display(arr,6) ;
	return 0;
	
}


