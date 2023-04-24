#include<stdio.h>
#include <stdlib.h>
int main ()
{
	int m[10][10] , n ;
	int k[10][10] , l ;
	int result[10][10];
	printf("\nenter the size of matrix \n") ;
	scanf("%d\n",&n) ;
	//scanf("%d",&l) ;
	for (int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ;  j<n ; j++)
		{
			scanf("%d\n",&m[i][j]) ;
		}
	}
	for (int i = 0 ; i<l ; i++)
	{
		for(int j = 0 ;  j<l ; j++)
		{
			scanf("%d\n",&k[i][j]) ;
		}
	}
	for (int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ;  j<n ; j++)
		{
			
			
				result[i][j] = m[i][j]*k[j][i] ;
				printf("%d\t",result[i][j]) ; 
			
		}
	}
}


