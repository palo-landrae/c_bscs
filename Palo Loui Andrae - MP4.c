#include <stdio.h>

#include <stdlib.h>

int sum();
int substraction();
int multiplication();
int division();
void show_menu();

int main() {
    int num1;
    int num2;
    int choice;

    do {
        show_menu();

        choice_input: printf("Enter your choice: ");
        scanf("%d", & choice);

        if (choice == 0)
            continue;

        printf("Enter num1: ");
        scanf("%d", & num1);
        printf("Enter num2: ");
        scanf("%d", & num2);

        switch (choice) {
        case 1:
            printf("%d added to %d = %d\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("%d substracted to %d = %d\n", num1, num2, substraction(num1, num2));
            break;
        case 3:
            printf("%d multiplied to %d = %d\n", num1, num2, multiplication(num1, num2));
            break;
        case 4:
            printf("%d divided to %d = %d\n", num1, num2, division(num1, num2));
            break;
        default:
            printf("Invalid choice...\n");
            goto choice_input;
            break;
        }
    } while (choice != 0);

    printf("Program terminated.");
    return 0;
}

int sum(int n1, int n2) {
    return n1 + n2;
}

int substraction(int n1, int n2) {
    return n1 - n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

int division(int n1, int n2) {
    return n1 / n2;
}

void show_menu() {
    printf("*****************************\n");
    printf("*                           *\n");
    printf("*     Palo's Calculator     *\n");
    printf("*  choose your operation    *\n");
    printf("*  [1] addition             *\n");
    printf("*  [2] substraction         *\n");
    printf("*  [3] multiplication       *\n");
    printf("*  [4] division             *\n");
    printf("*  [0] exit                 *\n");
    printf("*                           *\n");
    printf("*****************************\n");
}