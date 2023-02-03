#include <stdio.h>

int calculate_factorial();
int use_formula();

int main() {
    int x, y, a, b;

    printf("Enter x: ");
    scanf("%d", & x);
    printf("Enter y: ");
    scanf("%d", & y);
    printf("Enter a: ");
    scanf("%d", & a);
    printf("Enter b: ");
    scanf("%d", & b);

    printf("The answer is %d", use_formula(x, y, a, b));
    return 0;
}

int use_formula(int x, int y, int a, int b) {
    return (calculate_factorial(x) + calculate_factorial(y) * 3) / (calculate_factorial(a) - calculate_factorial(b));
}

int calculate_factorial(int i) {
    if (i > 1)
        return i * calculate_factorial(i - 1);
    else
        return 1;
}