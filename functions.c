// write 2 function - one to print "Hello" & second to print "Good bye"

// declaration / prototype

#include<stdio.h>
// void hello();
// void goodby();

// int main(){ // function call
//     hello();
//     goodby();
//     return 0;
// }

// // function definition
// void hello(){
//     printf("Hello\n");
// }
// void goodby(){
//     printf("Goodbye\n");
// }



//Q-2
// write a function that prints thank you if users bangladesh & Dhaka if the user is french




void bangladesh();
void dhaka();

int main(){
printf("Enter b for bangladesh or d for Dhaka");
char ch;
scanf("%c",&ch);

if(ch=='b'){

    bangladesh();
}
else{
    dhaka();
}

return 0;

}

void bangladesh(){
     printf("Thank you ");
}

void dhaka(){
    printf("Wel-come");
}