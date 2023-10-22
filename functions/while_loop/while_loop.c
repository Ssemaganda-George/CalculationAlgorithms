 #include <stdio.h>
#include <stdlib.h>

int x;
short *y;

void functionX(void);

void functionX(void) {
    unsigned char i = 0, j;
    while (i < 10) {
        j = 0;
        while (j < 5) {
            int k = 10;
            x += k + j;
            j++;
        }
        *y = x * j;
        i++;
    }
}

int main() {
    // Allocate memory for y
    y = (short *)malloc(sizeof(short));
    if (y == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Call the function
    functionX();

    // Output the value pointed by y
    printf("Value pointed by y: %d\n", *y);

    // Free the allocated memory
    free(y);

    return 0;
}
