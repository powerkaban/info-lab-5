
#include <iostream>
#pragma warning (disable:4996)


void printMatrix(int matrix[width][heigth]) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < heigth; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int loadMatrix(int width, int *heigth) {
    int matrix[width][heigth];

    for (int j = 0; j < heigth; j++) {
        int count = 0; 
        int maxElement = matrix[0][j]; 

        for (int i = 0; i < width; i++) {
            if (matrix[i][j] % 7 == 0) {
                count++;
                if (matrix[i][j] > maxElement) {
                    maxElement = matrix[i][j];
                }
            }
        }

        if (count % 2 == 0) { 
            for (int i = 0; i < width; i++) {
                if (matrix[i][j] == maxElement) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}

int main() {
    int *width = new int[i], *heigth;
    scanf_s();

    printf("Исходная матрица:\n");
    printMatrix(matrix);

    return 0;
}


/*
int main()
{
    printf("zadanie nomer 5 variant 15 \n");
    int width, heigth,A[30];
    printf("width:");
    scanf("%d",&width);
    printf("heigth:");
    scanf("%d",&heigth);
    printf("Massive:");
    for(int i =0;i<heigth*width;i++){
        scanf("%d",&A[i]);
    }
    int ma,co;
    int mai;
    for(int i =0;i<heigth;i++){
        ma = -100000;
        co=0;
        for(int j =0;j<width;j++){
            if (ma<A[i+j*width]){
                ma = A[i+j*width];
                mai = i+j*width;
            }
            if(A[i+j*width]%7==0){
                co++;
            }
        }
        if(co%2==0){
            A[mai]=0;
        }
        
    }
    
    for(int i =0;i<width;i++){
        for(int j =0;j<heigth;j++){
            printf(" %d",A[i*width+j]);
        }
        printf("\n");
    }
    return 0;
}

