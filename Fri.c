#include<stdio.h>

//This code display how types work in c

// \n is new line 
// int =%d
// char = %c
// float = %f
// scanf ("%d",& age);
int main()
{

int a,b;
printf("enter a");
scanf("%d", &a);

printf("enter b");
scanf("%d", &b);

int sum = a + b;
printf("sum is: %d",sum);

return 0;

}