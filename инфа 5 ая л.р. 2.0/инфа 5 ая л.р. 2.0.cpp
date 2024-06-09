#include <iostream>
using namespace std;

#define N 10 
#define M 10 


void printMatrix(int matrix[N][M], int rows, int cols) {
    printf("Текущее состояние матрицы:\n");
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n\n");
    }
}


void loadMatrix(int matrix[N][M], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        printf_s("Введите %d строку:\n", row);
        for (int col = 0; col < cols; col++) {
            scanf_s("%d", &matrix[row][col]);
        }
    }
}


void processMatrix(int matrix[N][M], int rows, int cols) {
    for (int col = 0; col < cols; col++) {
        int maxElement = 0;
        int count = 0;
        for (int row = 0; row < rows; row++) {
            if (matrix[row][col] % 7 == 0) {
                count++;
                if (matrix[row][col] > maxElement) {
                    maxElement = matrix[row][col];
                }
            }
            if (count % 2 == 0) {
                for (int row = 0; row < rows; row++) {
                    if (matrix[row][col] == maxElement) {
                        matrix[row][col] = 0;
                    }
                }
            }
        }
    }
}


void inputArraySize(int *rows, int *cols) {
    printf_s("введите ширину и длину массива через пробел: ");
    scanf_s("%d %d", rows, cols);
}


int main() {
    setlocale(LC_ALL, "RU");

    int matrix[N][M];
    int ROWS, COLS;
    inputArraySize(&ROWS, &COLS);

    loadMatrix(matrix, ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
    processMatrix(matrix, ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);

    return 0;
}


/*
7 2 14 15
21 22 23 24
1 32 77 34
0 42 43 44

7 2
14 7

*/
