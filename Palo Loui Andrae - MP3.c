#include <stdio.h>

int calculate_factorial(int n);

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", & n);
    
    printf("%d! = %d", n, calculate_factorial(n));
    return 0;
}

int calculate_factorial(int i) {
    if (i>1)
        return i * calculate_factorial(i-1);
    else
        return 1;
}
