//convert celcius into farenheit
#include<stdio.h>
int main()
{
	float cel,F;
	printf("enter temp in celcius :");
	scanf("%f",& cel);
	F= 32 + ((cel*9)/5);
	printf("temperature in Farenheit : %f \n",F);
	return 0;
}
