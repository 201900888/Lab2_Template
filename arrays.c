#include <stdio.h>
#include "arrays.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

//Nível 2
int arrayFirstIndexOf(int val, const int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == val) {
            return i;  
        }
    }
    return -1;  
}

int arrayLastIndexOf(int val, const int arr[], int arrLength) {
    int lastIndex = -1;  
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == val) {
            lastIndex = i;  
        }
    }
    return lastIndex; 
} 

//Nível 3
void arraySort(int arr[], int arrLength, bool ascending) {
    int temp;
    int i, j;
    for (i = 0; i < arrLength - 1; i++) {
        for (j = 0; j < arrLength - i - 1; j++) {
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

//Nível 4 
int matrixMaximumIndex(int m, int n, int mat[][n]) {
   
    if (m <= 0 || n <= 0) {
        return -1;
    }

    int max = mat[0][0]; 
    int maxIndex = 0; 

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
                maxIndex = (i * n + j); 
            }
        }
    }

    return maxIndex;
}


