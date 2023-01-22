#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 > num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    printf("Maximum number is: %d", max);
    return 0;
}



// 2nd problem
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }
    return 0;
}


// 3rd problem

#include <stdio.h>

int main() {
    int yearlySalary;
    printf("Enter yearly salary: ");
    scanf("%d", &yearlySalary);

    int monthlySalary = yearlySalary / 12;
    printf("Monthly salary: %d", monthlySalary);
    return 0;
}


// 4th 

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    } else {
        printf("Not an alphabet");
    }
    return 0;
}
