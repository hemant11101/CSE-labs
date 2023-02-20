#include<stdio.h>
#include<stdlib.h>

int conGCD(int m , int n)
{
	int s ,t , opcount = 0;
	if(m<n)
	{
		t = m ;
	}
	else
	{
		t = n ;
	}
	while(t)
	{
		opcount ++ ;
		if(m%t == 0 && n%t == 0)
		{
			s = t ;
		}
			t-- ;
			//printf("%d\n",t) ;
		
	}
	printf("%d\n",opcount) ;
	return s ;


} 

int main()
{
	int i = conGCD(6,8) ;
	printf("%d",i) ;
	
	return 0 ;
}
