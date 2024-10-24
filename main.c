#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows , cols;
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the number of coloumns :" );
    scanf("%d",&cols);
    printf("%p\n %p\n",&rows,&cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        //matrix[i] = (int *)malloc(cols * sizeof(int));
        *(matrix + i) = (int *)malloc(cols * sizeof(int));
        printf("%p\n",matrix[i]);
    }


    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


    printf("Enter elements of the  matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            printf("%p\n",&matrix[i][j]);
        }
    }


    printf("The  matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    free(matrix);



    return 0;
}
