
#include <stdio.h>

#define X 2  // Number of 2D matrices in the first dimension
#define Y 3  // Number of rows in each 2D matrix
#define Z 4  // Number of columns in each 2D matrix

void print3DArray(int arr[X][Y][Z]) {
    for (int i = 0; i < X; i++) {
        printf("Matrix %d:\n", i + 1);
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void) {
    // Example 3D array initialization
    int array3D[X][Y][Z] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    
    print3DArray(array3D);
    
    return 0;
}
