#include <stdio.h>
int main(){
long n,t,i,x=0,a;
long ar[n-1];
printf("enter a number: \n");
scanf("%d",&n);
if (n<2||n>200000)
printf("false");
else
for (i = 0; i<=n-2; i++)
{
printf("enter the %ld number:\n",i);
scanf("%ld",&ar[i]);
}
for ( i = 0; i <= n-2; i++)
{
   x=x+ar[i]; 
}
t=(n*(n+1))/2-x;
printf("the missing number is %d",t);
return 0;
}
