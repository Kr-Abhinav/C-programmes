// Programme to take variabel of all data type

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any integer value:");
	scanf("%d",&a);
	
	char b;
	printf("Enter any Character type value:");
	scanf("%s",&b);
	
	float c;
	printf("Enter any Decimal value:");
	scanf("%f",&c);
	
	printf(" Integer Value:%d \n Character Value: %s\n Float Value:%f \n",a,b,c);
	return 0;
}
