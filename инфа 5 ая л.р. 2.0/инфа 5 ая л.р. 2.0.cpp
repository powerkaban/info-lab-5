#include <iostream>
using namespace std;


void printMatrix(int matrix[2][2], int rows, int cols) {
    printf("Исходная матрица:\n");
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++) {
            printf("%d", matrix[col][row]);
        }
        printf("\n");
    }
}


void loadMatrix(int matrix[2][2], int rows, int cols) {
    for (int col = 0; col < cols; col++) {
        printf_s("ввести %d строку", col);
        for (int row = 0; row < rows; row++) {
            scanf_s("%d", &matrix[col][row]);
        }
    }
}


void processMatrix(int matrix[2][2], int rows, int cols) {
    int maxElement = 0;
    int count = 0;

    for (int col = 0; col < cols; col++) {
        for (int row = 0; row < rows; row++) {
            if (matrix[row][col] % 7 == 0) {
                count++;
                if (matrix[row][col] > maxElement) {
                    maxElement = matrix[row][col];
                }
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


void inputArraySize(int *rows, int *cols) {
    printf_s("введите ширину и дину массива");
    scanf_s("%d %d", rows, cols);
}


int main() {
    setlocale(LC_ALL, "RU");

    int matrix[2][2];
    int ROWS, COLS;
    inputArraySize(&ROWS, &COLS);

    loadMatrix(matrix, ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
    processMatrix(matrix, ROWS, COLS);

    return 0;
}


/*
int main()
{
    printf("zadanie nomer 5 variant 15 \n");
    int cols, rows,A[30];
    printf("cols:");
    scanf("%d",&cols);
    printf("rows:");
    scanf("%d",&rows);
    printf("Massive:");
    for(int i =0;i<rows*cols;i++){
        scanf("%d",&A[i]);
    }
    int ma,co;
    int mai;
    for(int i =0;i<rows;i++){
        ma = -100000;
        co=0;
        for(int j =0;j<cols;j++){
            if (ma<A[i+j*cols]){
                ma = A[i+j*cols];
                mai = i+j*cols;
            }
            if(A[i+j*cols]%7==0){
                co++;
            }
        }
        if(co%2==0){
            A[mai]=0;
        }
        
    }
    
    for(int i =0;i<cols;i++){
        for(int j =0;j<rows;j++){
            printf(" %d",A[i*cols+j]);
        }
        printf("\n");
    }
    return 0;
}
*/
