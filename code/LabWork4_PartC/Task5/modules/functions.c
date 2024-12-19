#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

void get_string_field(char* f_input, long int n, long int m){
    while(1){
        char buffer [128];
        scanf("%s", buffer); 
        bool flag = 0;
        for(int i = 0; i < m; ++i){
            if(buffer[i] != '.' && buffer[i] != '*'){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("Неверный ввод! Попробуйте снова");
        } else {
            strcat(f_input, buffer);
            break;
        }
    }
}

void fill_field(char* field_input, long int n, long int m, int** init_field){
    for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; j++){
                if(field_input[i*m+j] == '*'){
                    if(i>0){
                        if(j>0){
                            init_field[i-1][j-1] = field_input[(i*m+j)-m-1] == '*'? 0 : init_field[i-1][j-1] + 1;
                        }
                        init_field[i-1][j] = field_input[(i*m+j)-m] == '*'? 0 : init_field[i-1][j] + 1;
                        if(j!=m-1){
                            init_field[i-1][j+1] = field_input[(i*m+j)-m+1] == '*'? 0 : init_field[i-1][j+1] + 1;
                        }
                    }
                    if(j>0){
                        init_field[i][j-1] = field_input[(i*m+j)-1] == '*'? 0 : init_field[i][j-1] + 1;
                    }
                    if(j!=m-1){
                        init_field[i][j+1] = field_input[(i*m+j)+1] == '*'? 0 : init_field[i][j+1] + 1;
                    }
                    if(i != n-1){
                        if(j>0){
                            init_field[i+1][j-1] = field_input[(i*m+j)+m-1] == '*'? 0 : init_field[i+1][j-1] + 1;
                        }
                        init_field[i+1][j] = field_input[(i*m+j)+m] == '*'? 0 : init_field[i+1][j] + 1;
                        if(j!=m-1){
                            init_field[i+1][j+1] = field_input[(i*m+j)+m+1] == '*'? 0 : init_field[i+1][j+1] + 1;
                        }
                    }
                }
            }
        }

}
