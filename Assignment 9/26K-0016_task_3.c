#include <stdio.h>

int main(void) {
    int image[3][3];
    int (*ptr)[3] = image;
    int row, column;

    puts("Enter 9 pixel values for the 3 x 3 image:");

    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            printf("Pixel (%d, %d): ", row + 1, column + 1);
            if (scanf("%d", *(ptr + row) + column) != 1) {
                puts("Invalid pixel value.");
                return 1;
            }
        }
    }

    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            *(*(ptr + row) + column) *= 2;
        }
    }

    puts("\nUpdated image matrix:");
    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            printf("%6d", *(*(ptr + row) + column));
        }
        putchar('\n');
    }

    return 0;
}
