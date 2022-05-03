#include<stdio.h>
#include <conio.h>
void main()
{
int a,n,d=0;
printf("enter a number:");
scanf("%d",&a);
for(n=1;n<=a;n++)
{
if(a%n==0)
d++;
}
if(d==2)
printf("prime number");
else if(d==0)
printf("neither prime nor composite number");
else
printf("not a prime number");
getch();
}