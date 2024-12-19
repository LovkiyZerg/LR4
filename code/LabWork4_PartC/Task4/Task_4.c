#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "modules/functions.h"

int main(int, char**){
    long int execute = 0;
    do{
        system("clear");
        printf("Дан трёхмерный динамический массив размером n^3 целых\nнеотрицательных чисел. Необходимо определить диагональ с наибольшей\nсуммой чисел. Для обхода диагоналей нельзя использовать вложенные циклы.\n");
        printf("Введите размер измерения массива\n");
        long int n = 0;
        get_int(&n);

        float ***arr = NULL;
        arr = (float***)malloc(n * sizeof(float**));
        for(int i = 0; i < n; ++i){
            arr[i] = (float**)malloc(n * sizeof(float*));
            for (int j = 0; j < n; ++j){
                arr[i][j] = (float*)malloc(n * sizeof(float));
            }
        }

        printf("Введите значения элементов массива\n");
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; j++){
                for(int h = 0; h < n; h++){
                    scanf("%f", &arr[i][j][h]);
                };
            };
        };

        float d1 = 0, d2 = 0, d3 = 0, d4 = 0;
        for(int i = 0; i < n; i++){
            d1 += arr[i][i][i];
            d2 += arr[i][n-i-1][i];
            d3 += arr[n-i-1][n-i-1][i];
            d4 += arr[n-i-1][i][i];
        }
        float maxd = floatmax(floatmax(d1,d2), floatmax(d3,d4));
        char *nameofdiag;
        if (maxd == d1){
            nameofdiag = "d1";
        } else if (maxd == d2){
            nameofdiag = "d2";
        } else if (maxd == d3){
            nameofdiag = "d3";
        } else {
            nameofdiag = "d4";
        }
        printf("Диагональ с наибольшей суммой чисел:%s", nameofdiag);

        for(int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j){
                free(arr[i][j]);
                arr[i][j] = NULL;
            }
            free(arr[i]);
            arr[i] = NULL;
        }
        free(arr);
        arr = NULL;

        printf("\n  Чтобы повторить выполнение программы, введите 1 \nЧтобы завершить выполнение программы, введите 0\n");
        get_execute(&execute);
    } while(execute == 1);
}
