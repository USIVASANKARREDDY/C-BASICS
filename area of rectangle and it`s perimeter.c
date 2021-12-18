#include<stdio.h>
void main()
{
	float l,b,area,peri;
	printf("please enter a number : ");
	scanf("%d%d",&l,&b);
	area=l*b;
	peri=2*l*b;
	printf("area of the rectangle with sides %f and %f is : %f",l,b,area);
	printf("perimeter of rectangle with side %f and %f is : %f",l,b,peri);
}
