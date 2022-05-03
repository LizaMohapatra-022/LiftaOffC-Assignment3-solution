#include<stdio.h>

int main()
{
int a[100],b,i,d;
printf("how many numbers do you want");
scanf("%d",&d);
for(i=1;i<=d;i++)
{
    printf("enter the value of a");
    scanf("%d",&a[i]);
    }
    b=a[1];
    for(i=1;i<=d;i++)
    if(a[i]>b)
    b=a[i];
    printf("%d",b);
    return 0;
}