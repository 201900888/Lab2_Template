#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

int main() {

    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };

    int matrix[6][5] = {
            {31,22, 4,17,24},
            {36,40,24,29,22},
            {34,16,39,50,26},
            {15,20,18, 7,39},
            {4,34,22,26,30},
            {5,42, 9,31,27}
            };

    /* Program code. */
    printf("Sequence seq: ");
    printArray(seq, 50);

   //Nível 2
    printf("Enter the value to search for: ");
    int value;
    readInteger(&value);

    int firstIndex = arrayFirstIndexOf(value, seq, 50);
    int lastIndex = arrayLastIndexOf(value, seq, 50);

    if (firstIndex == -1) {
        printf("Value %d does not exist in the sequence.\n", value);
    } else {
        printf("Index of the first occurrence of %d: %d\n", value, firstIndex);
        printf("Index of the last occurrence of %d: %d\n", value, lastIndex);
    }

    printf("Original sequence: ");
    printArray(seq, 50);

    //Nível 3
    // Ascendente
    arraySort(seq, 50, true);
    printf("Sequence in ascending order: ");
    printArray(seq, 50);

    // Descendente
    arraySort(seq, 50, false);
    printf("Sequence in descending order: ");
    printArray(seq, 50);

    //Nível 4 
    int m = 6; 
    int n = 5; 
    int maxIndex = matrixMaximumIndex(m, n, matrix);

    if (maxIndex != -1) {
        printf("O índice do maior valor na matriz é: %d\n", maxIndex);
    } else {
        printf("A matriz é vazia ou tem dimensões inválidas.\n");
    }

    return 0;

 
    return EXIT_SUCCESS;

}







   