#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "modules/functions.h"

int main(int, char**){
    long int execute = 0;
    do{
        system("clear");
        printf("На вход подаётся поле для игры в сапёр размером n*m символов, где\nсимвол '.' означает пустое место, а символ '*' - бомбу. Требуется дополнить это\nполе числами, как в оригинальной игре.\n");
        char field_input [128];
        memset(field_input, 0, 128);  
        long int n = 0, m = 0;
        printf("Введите ширину поля\n");
        get_lint(&m);
        printf("Введите высоту поля\n");
        get_lint(&n);
        printf("Введите поле для игры в сапёр\n");
        for(int i = 0; i < n; ++i){
            get_string_field(field_input, n, m);
        };

        int **init_field = NULL;
        init_field = (int**)malloc(n * sizeof(int*));
        for(int i = 0; i < n; ++i){
            init_field[i] = (int*)malloc(m * sizeof(int));
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; j++){
                init_field[i][j] = 0;
            }
        }
        fill_field(field_input, n, m, init_field);

        printf("\nПоле, дополненное цифрами:\n\n");

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(init_field[i][j] == 0){
                    printf("*");
                } else {
                    printf("%i", init_field[i][j]);
                }
            }
            printf("\n");
        }
        

        for(int i = 0; i < n; ++i){
            free(init_field[i]);
            init_field[i] = NULL;
        }
        free(init_field);
        init_field = NULL;
        printf("\n  Чтобы повторить выполнение программы, введите 1 \nЧтобы завершить выполнение программы, введите 0\n");
        get_execute(&execute);
    } while(execute == 1);
}



/*
*.*.
*.*.
..*.

*.*.*
*.*..
..*..
*..*.
*/