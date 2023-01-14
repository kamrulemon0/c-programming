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
int oain(){ // all time int main {some need  that why i change}

int b, c;
b=c=1;
int a =b +c;
int power = b^c;
printf("%d",power);
return 0;

}
 
 #include<stdio.h>
 #include<math.h>       // Type conversion
 int pain() {            // int op int = int
  int a = 4*3 / 6*2 ;
  printf("%d\n",a);                     //int op float = float
    return 0;             // float op float = float
 }

// practice qs -4 [a-5*2 -2*3] b[5*2/2*3] c[5*2\2]*3 d[5+2\2*3]

//Control instruction (a) sequence control (b) Decision control (c) Loop control  (d) case control

// true =1
// false = 0
//operators [Logical Operators](&&-and)(|| or)(! Not)
