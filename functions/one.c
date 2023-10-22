#include <stdio.h>
int x;
short *y;
void functionX (void);
void functionX (void){
    unsigned char i, j;
    for (i = 0; i< 10; i++){
        for (j = 0; j < 5; j++){
            int k = 10;
            x += k +  j;
        }
        *y = x*j;

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
