#include<stdio.h>
int main()
{
	float fehrenheit,celcius;
	printf("enter celcius number:");
	scanf("%f",&celcius);
	fehrenheit =((celcius*9)/5)+32;
	printf("temp is %f ",fehrenheit);
}
