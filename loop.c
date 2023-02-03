#include<stdio.h>
int kain(){
    //iterator ; counter
    for(int i=1; i<=5; i=i+1 ){
        printf("Hello Thor\n");
    }
    
                       // Loop control instructions [ type -1-for,2-while,3-do while]
}                     //for(initialisation,condition; updation)


// Qs. print the numbers from 0 to 10
int pain(){

    for(int i =0; i<=10; i=i+1){ //Increment operator (++i[pre increment],i++[post increment])
        printf("%d\n", i);        // decrement operator (--i,i--)
    }
}


int tain(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f\n",i);
    }

for(char ch='a'; ch<='z'; ch++){
    printf("%c\n",ch);
}
}

int lain(){
    int i =1;
    while(i<=5){
        printf("Hello world\n");
        i++;
    }
   return 0;
}

// any number printf

// while version
int uain(){
    int n;
    printf("enter value :");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//For version 

int nain(){
    int n;
    printf("enter value:");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}

// do while loop

int zain(){
    int i =1;
    do{
        printf("%d\n",i);
        i++;     
    } while(i<=5);

    return 0;
}

// printf the sum of First n natural numbers 
//n=4; also, print them in reverse.

// int Aain(){
//     int n;
//     printf("enter number :");
//     scanf("%d", &n);

//     int sum =0;
//     for(int i=1; i<=n ; i++){  // revers --for(int i=n; i>=1; i--)
//         sum = sum + i;
//     }
    
//     printf( "sum is %d\n", sum);
//     return 0;
// }


// Print the table of a number input by the user.

int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d\n", n*i);
    }
}

// Keep taking numbers as input from user until user until user enters an odd number
// do while loop
