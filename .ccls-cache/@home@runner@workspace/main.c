#include <stdio.h>

int main(void) {

 
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


