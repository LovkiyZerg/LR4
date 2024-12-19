#include <stdio.h>
#include <stdlib.h>

#include "modules/functions.h"

int main(int, char**){
    long int execute = 1;
    do{
        system("clear");
        printf("Построить магический квадрат. Порядок квадрата задаётся\nпользователем. Максимальный размер магического квадрата не превышает (2^32)-1\n");
        printf("\nВыполнил Багаев Леонид\n");
        printf("Введите порядок магического квадрата\n");
        long int n = 0;
        get_lint(&n);

        int **square = NULL;
        square = (int**)malloc(n * sizeof(int*));
        for(int i = 0; i < n; ++i){
            square[i] = (int*)malloc(n * sizeof(int));
        }
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){ // Зануляем все элементы массива
                square[i][j] = 0;
            }
        }

        if(n == 4){
            int p = 0, q = 0;
            for(int f = 0; f < n; ++f){
                square[p][q] = 1;
                ++p;
                ++q;
            }
            p = n-1;
            q = 0;
            for(int f = 0; f < n; ++f){
                square[p][q] = 1;
                --p;
                ++q;
            }
                        // straight passage
            int count = 1;
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    if(square[i][j] == 0){
                        square[i][j] = count;
                    }
                    ++count;
                }
            }
            // reverse passage   
            count = 1;
            for(int i = n-1; i >=0; --i){
                for(int j = n-1; j >=0; --j){
                    if(square[i][j] == 1){
                        square[i][j] = count;
                    }
                    ++count;
                }
            }
        } else if (n%4 == 0){
            //B2
            for(int i = 0; i < (n/4)-1; ++i){
                for(int j = n/4; j < n-(n/4); ++j){
                    square[i][j] = 1;
                }
            }
            //B8
            for(int i = n-(n/4); i < n; ++i){
                for(int j = n/4; j < n-(n/4); ++j){
                    square[i][j] = 1;
                }
            }
            //B4
            for(int i = n/4; i < n-(n/4); ++i){
                for(int j = 0; j < (n/4)-1; ++j){
                    square[i][j] = 1;
                }
            }
            //B6
            for(int i = n/4; i < n-(n/4); ++i){
                for(int j = n-(n/4); j < n; ++j){
                    square[i][j] = 1;
                }
            }
            // straight passage
            int count = 1;
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    if(square[i][j] == 0){
                        square[i][j] = count;
                    }
                    ++count;
                }
            }
            // reverse passage 
            count = 1;  
            for(int i = n-1; i >=0; --i){
                for(int j = n-1; j >=0; --j){
                    if(square[i][j] == 1){
                        square[i][j] = count;
                    }
                    ++count;
                }
            }
            square[0][0] = 1;
        }

        if(n%2 == 1){
            int start_i = 0;
            int start_j = 0;
            int count = 1;
            int end_i = n-1;
            int end_j = n-1;
            int size = n;
            odd_square(square, start_i, start_j, end_i, end_j, count, size);
        }

        if(n == 2){
            printf("Такого магического квадрата не существует!!!\n");
        } else if((n+2)%4 == 0){
            doubly_even_square(square, n);
        }


        if(n != 2){
            for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                printf("%i", square[i][j]);
                printf(" ");
            }
            printf("\n");
        }
        }

        for(int i = 0; i < n; ++i){
            free(square[i]);
            square[i] = NULL;
        }
        free(square);
        square = NULL;

        printf("\n  Чтобы повторить выполнение программы, введите 1 \nЧтобы завершить выполнение программы, введите 0\n");
        get_execute(&execute);

    } while(execute == 1);
}



