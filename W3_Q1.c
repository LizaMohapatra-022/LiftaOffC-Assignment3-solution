#include<stdio.h>

int main()
{
int a,b,n,d;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    if(b<a)
    {
    n=b;
    for(n=b;n>=1;n--)
    {
   if(a%n==0&&b%n==0)
d=n;
}
printf("gcd is:%d",d);
}
    else
    {
    n=a;
    for(n=a;n>=1;n--)
    {
   if(a%n==0&&b%n==0)
d=n;
}
printf("gcd is:%d",d);
    }
    return 0;
}