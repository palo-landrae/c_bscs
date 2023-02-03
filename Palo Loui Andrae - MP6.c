#include <stdio.h>

struct MinMax {
  int min;
  int max;
};

struct MinMax getMinMax(int x, int y);

int main() {
    int x, y;
    
    printf("Enter x: ");
    scanf("%d", & x);
    printf("Enter y: ");
    scanf("%d", & y);
    
    struct MinMax output = getMinMax(x, y);

    printf("min = %d\n", output.min);
    printf("max = %d\n", output.max);
    return 0;
}

struct minMax getMinMax(int x, int y) {
    struct MinMax output;
    if (x > y){
        output.min = y;
        output.max = x;
    }else{
        output.min = x;
        output.max = y;
    }
    return output;
}