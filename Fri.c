#include<stdio.h>

//This code display how types work in c

// \n is new line 
// int =%d
// char = %c
// float = %f
// scanf ("%d",& age);
int main(){  // Qs-1: write a program to calculate are of a square (side is given)

    int side;
    printf("Enter side");
    scanf("%d",&side);
    printf("area is : %d", side*side);
    return 0;
}