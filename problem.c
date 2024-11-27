#include <stdlib.h>
#include <stdio.h>

#define ROWS 10
#define COLS 25

int main() {
    int arr[ROWS][COLS]; 

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <= COLS; j++) {
            if (j >= COLS) {
                //printf("error: arr[%d][%d] out of bounds\n", i, j);
                fprintf(stderr, "error: arr[%d][%d] out of bounds\n", i, j);
                break;
            }
            arr[i][j] = (i*COLS) + j;
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}
