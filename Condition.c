#include<stdio.h>
int aain(){
    int age;
    printf("enter age :");
    scanf("%d",&age);

    if(age>=18){

        printf("adult \n");

    }
    else if(age > 13 && age <18){
        printf("Hello world");
    }
    else {
        printf("child");
    }
}

// switch

int kain(){
 int day;
 printf("enter day(1-7) :");
 scanf("%d",&day);

switch(day){

    case 1 : printf("Emonday\n");
         break;
    case 2 : printf("Hello day\n");
          break;
    case 3 : printf("monday\n");
         break;
    case 4 : printf("oday\n");
         break;
    case 5 : printf("day\n");
         break;

  default : printf("Not a valid day \n");

}



 return 0;

}

int main(){
int number;
printf("enter number :");
scanf("%d",number);

if(number >= 0) {
    printf("Positive \n");

    if(number % 2==0){
        printf("even\n");

    }else{
        printf("odd\n");
    }

} else {
    printf("Negative \n");
}

  return 0;

}