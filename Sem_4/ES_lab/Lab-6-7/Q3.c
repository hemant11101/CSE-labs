
#include<LPC17xx.h>
unsigned int i,j,c=1;
 
int main(void)
{

LPC_GPIO0->FIODIR |= 0X00000FF0;
 
LPC_GPIO2->FIODIR &= 0XFFFFEFFF;
 

while(1)
{ 
	for(j=0;j<8;j++){
		if(!(LPC_GPIO2->FIOPIN & 1<<12)){
			LPC_GPIO0->FIOPIN=c<<4;
			for(i=0;i<100000;i++);
			c<<=1;
			}
}
c=1;
}
return 0;
}

