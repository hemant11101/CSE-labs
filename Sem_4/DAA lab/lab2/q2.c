#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int[] sieveMETH( int m ) 
{
	int a[m+1] ;
	int p = sqrt(m) ;
	for(int i = 2 ; i<=m ; i++)
	{
		a[i] = i ;
		for(int i = 2 ; i<p ; i++)
		{
			if (a[i] != 0)
			{
				int j = i*i ;
			}
			while(j<= i)
			{
				do(a[j] == 0)
				j= j+ i ;
			}
		}


	}

}