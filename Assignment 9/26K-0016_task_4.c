#include <stdio.h>

int add(int first, int second) {
    return first + second;
}

int multiply(int first, int second) {
    return first * second;
}

int findMax(int first, int second) {
    if (first > second) return first;
    return second;
}

int compute(int x, int y, int (*action)(int, int)) {
    return action(x, y);
}

int main(void) {
    int x, y;

    printf("Enter the first integer: ");
    if (scanf("%d", &x) != 1) return 1;

    printf("Enter the second integer: ");
    if (scanf("%d", &y) != 1) return 1;

    printf("Sum: %d\n", compute(x, y, add));
    printf("Product: %d\n", compute(x, y, multiply));
    printf("Maximum: %d\n", compute(x, y, findMax));

    return 0;
}
