#include<stdio.h>
void main()
{
	int t,m,h;
	printf("plaease enter time in minutes");
	scanf("%d",&t);
	h=t/60;
	m=t%60;
	printf("given time in minuts is %d in hours is %d and in minuts is %d",t,
	h,m);
	
}
