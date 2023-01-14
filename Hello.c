// Conditional statement

#include<stdio.h>
int main(){
    int eco;
    printf("What percentage of exam preparation is complete ? =");
    scanf("%d",eco);

    if(eco>90){
        printf("Study should be done well");
    }
    else{
        printf("A good student should sit for the exam");

    }

    return 0;
}
