#include<stdio.h>
int main()
{
	float a,area,circum;
	printf("enter the radius of circle : ");
	scanf("%f",&a);
	area=3.14*a*a;
	circum=2*3.14*a;
	printf("area of circle with radius %f is:%f",a,area);
	printf("\ncircumfence of circle with radius %f is :%f",a,circum);
	
}
