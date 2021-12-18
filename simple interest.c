#include<stdio.h>
void main()
{ 
float p,t,r,i;
printf("plaese enter principle,time,rate of interest");
scanf("%f%f%f",&p,&t,&r);
i=p*t*r/100;
printf("the interest for given principle %f time %f and rate of interest %f is:%f",p,t,r,i);
}
