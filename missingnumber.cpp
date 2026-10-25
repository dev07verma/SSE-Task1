#include <stdio.h>
int main(){
long n,t,x=0;
printf(" ");
scanf("%ld",&n);
long ar[n-1];
for (int i = 0; i<=n-2; i++)
{
printf(" ");
scanf("%ld",&ar[i]);
}
for (int i = 0; i <= n-2; i++)
{
   x=x+ar[i]; 
}
t=((n*(n+1))/2)-x;
printf("%d",t);
return 0;
}
