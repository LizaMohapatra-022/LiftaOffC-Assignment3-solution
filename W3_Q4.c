#include <stdio.h>
void swap(int *, int *); 
int main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Before swapping \n");
printf("a = %d \n",a);
printf("b = %d \n",b);
swap(&a,&b); 
printf("After swapping \n");
printf("a = %d \n",a);
printf("b = %d \n",b);
return 0;
}
void swap(int *x, int *y) 
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}

    