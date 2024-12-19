#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

void get_execute(long int* execute){
    *execute = 0;
    while(1){
        char buffer [128];
        scanf("%s", buffer);
        char* end = buffer;
        *execute = strtol(buffer, &end, 10);
        if(end == buffer || (*execute != 1 && *execute != 0)){
            printf("Неверный ввод! Введите число заново \n");
            *execute = 0;
        } else {
            break;
        }
    }
}

void get_lint(long int* x){
    *x = 0;
    while(1){
        char buffer [128];
        scanf("%s", buffer);
        char* end = buffer;
        *x = strtol(buffer, &end, 10);
        if(end == buffer){
            printf("Неверный ввод! Введите число заново \n");
            *x = 0;
        } else {
            break;
        }
    }
}

void odd_square(int** sqare, int start_i, int start_j, int end_i, int end_j, int count, int size){
            sqare[start_i][start_j+((end_j-start_j)/2)] = count;
            ++count;
            int i = start_i;
            int j = start_j+((end_j-start_j)/2);
            for(int f = 0; f < (size*size)-1; f++){
                if(i-1 == start_i-1 && j+1 == end_j + 1){
                    i = i + 1;
                    sqare[i][j] = count;
                    ++count;
                } else if(i-1 < start_i){
                    i = end_i;
                    j = j + 1;
                    sqare[i][j] = count;
                    ++count;
                } else if(j+1 == end_j + 1){
                    i = i-1;
                    j = start_j;
                    sqare[i][j] = count;
                    ++count;
                } else if (sqare[i-1][j+1] != 0){
                    i = i + 1;
                    sqare[i][j] = count;
                    ++count;
                } else {
                    i = i-1;
                    j = j+1;
                    sqare[i][j] = count;
                    ++count;
                }
            }
}

void swap(int** square, int i1, int j1, int i2, int j2){
    int cash = square[i1][j1];
    square[i1][j1] = square[i2][j2];
    square[i2][j2] = cash;
}

void doubly_even_square(int** square, int n){
            int start_i = 0;
            int start_j = 0;
            int count = 1;
            int end_i = n/2-1;
            int end_j = n/2-1;
            int size = n/2;
            odd_square(square, start_i, start_j, end_i, end_j, count, size); // upper-left square
            start_i = n/2;
            start_j = n/2;
            end_i = n-1;
            end_j = n-1;
            count = n*n/4 + 1;
            odd_square(square, start_i, start_j, end_i, end_j, count, size); // lower-right square
            start_i = 0;
            start_j = n/2;
            end_i = n/2-1;
            end_j = n-1;
            count = n*n/2 + 1;
            odd_square(square, start_i, start_j, end_i, end_j, count, size); // upper-right square
            start_i = n/2;
            start_j = 0;
            end_i = n-1;
            end_j = n/2-1;
            count = 3*n*n/4 + 1;
            odd_square(square, start_i, start_j, end_i, end_j, count, size); // lower-left square

            int k = (n-2)/4;

            for(int j = 0; j < k; ++j){  // first k columns
                for(int i = 0; i < n/2; ++i){
                    swap(square, i, j, i+n/2, j);
                }
            }

            int j = n-1;
            for(int f = 0; f < k-1; ++f){    //  last k-1 columns
                for(int i = 0; i < n/2; ++i){
                    swap(square, i, j, i+n/2, j);
                }
                --j;
            }

            swap(square, (n+2)/4 -1, k-1, (n+2)/4 -1 + n/2, k-1 );
            swap(square, (n+2)/4 -1, k, (n+2)/4 -1 + n/2, k);

}