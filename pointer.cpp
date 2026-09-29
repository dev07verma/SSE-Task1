#include <stdio.h>
//Program that defines a function that calculates power of one number raised to another and factorial value of a number in one call (use of pointers)
void power_fact (float x, int y, int num, float *pow, int *fac)
{
int i;
for (i=1;i<=num;i++)
{
*fac=*fac*i;
}
int z=1,h=1;
for (z=1;z<=y;z++)
{
h=h*x;
}
*pow=h;
}
int main()
{
float a;
int b, number, factorial=1;
float power;
printf("enter the value of a and b for calculating a to power of b: ");
scanf("%f %d",&a,&b);
printf("enter the number whose factorial is to be calculated: ");
scanf("%d", &number);
power_fact (a,b,number,&power,&factorial);
printf("power= %f Factorial=%d", power, factorial);
return 0;
}



