#include<stdio.h>

//This code display how types work in c

// \n is new line 
// int =%d
// char = %c
// float = %f
// scanf ("%d",& age);
int hain(){  // Qs-1: write a program to calculate are of a square (side is given)

    int side;
    printf("Enter side");
    scanf("%d",&side);
    printf("area is : %d", side*side);
    return 0;
};

// Q2 : write a program to calculate area of a circle

int kain(){
float radius;
printf("Enter radius");
scanf("%f",&radius);

printf("area is : %f", 3.1416*radius*radius);

return 0;
}
// instructions 
// These are statements in  program (Type -1.Type Declaration ,2.Arithmetic instruction .3.control instructions)
//Arithmetic instructions [Note -single variable on the LHS]


#include<math.h>
int main(){

int b, c;
b=c=1;
int a =b +c;
int power = b^c;
printf("%d",power);
return 0;

}
