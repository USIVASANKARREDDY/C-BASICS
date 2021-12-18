#include<stdio.h>
void main()
{
	int minut,hour,t;
	printf("please enter time in hour and minutes");
	scanf("%d%d",&hour,&minut);
	t=(hour*60)+minut;
	printf("given time in %d hours and in %d minutes is %d minutes",hour,minut,t);
	
}
