#include<stdio.h>
#include<stdlib.h>
void assign(int mat[4][4] ,int n ) 
{
	int max =100000;
	int sum = 0 ;
	for(int i = 0 ; i<n ;i++)
	{
		for(int j= 0 ; j<n ; j++)
		{
			
			if(i == j)
				continue ;
			for(int k = 0 ;k<n ; k++)
			{
				if(k == i||k==j)
					continue ;
				for(int l = 0 ; l<n ; l++)
				{
					if(l == i|| l==j ||  l==k)
						continue ;
					sum = mat[0][i]+mat[1][j]+mat[2][k]+mat[3][l] ;
					if(sum<max)
			max = sum ;
				}
			}


		}
		
	}
	printf("%d",max);
}

int main()
{
	int mat[4][4] = {{1,2,3,4},{5,6,7,8},{4,3,2,1},{8,7,6,5}} ;
	int n =4 ;
	assign(mat , 4) ; 

}