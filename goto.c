#include<stdio.h>
int main()
{
	int i=0;

	goto ELSEPART;

	if ( i== 0 ) 
	{
		char a [20]= "hello"; 
		int j=10;
IFPART: 	printf("j in if = %d\n", j);
	}
	else 
	{
		int j = 30;
ELSEPART: 	printf("j in else %d\n", j);
	  	goto IFPART;
	}

}

