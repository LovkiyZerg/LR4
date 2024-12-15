#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void get_execute(long int*);
void get_string_field(char*, long int, long int);
void get_int(long int*);

int main(int, char**){
    long int execute = 0;
    do{
        system("clear");
        printf("На вход подаётся поле для игры в сапёр размером n*m символов, где\nсимвол '.' означает пустое место, а символ '*' - бомбу. Требуется дополнить это\nполе числами, как в оригинальной игре.\n");
        char field_input [128];
        memset(field_input, 0, 128);  
        long int n = 0, m = 0;
        printf("Введите ширину поля\n");
        get_int(&m);
        printf("Введите высоту поля\n");
        get_int(&n);
        printf("Введите поле для игры в сапёр\n");
        for(int i = 0; i < n; ++i){
            get_string_field(field_input, n, m);
        };
        printf("\n%s", field_input);

        int **init_field = NULL;
        init_field = (int**)malloc(n * sizeof(int*));
        for(int i = 0; i < n; ++i){
            init_field[i] = (int*)malloc(m * sizeof(int));
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; j++){
                init_field[i][j] = 0;
                printf("%i", init_field[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; j++){
                if(field_input[i*m+j] == '*'){
                    printf("%li", i*m+j);
                    printf(" ");
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

void get_int(long int* x){
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
        scanf("%s", buffer); // gets 
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

/*
*.*.
*.*.
..*.

*.*.*
*.*..
..*..
*..*.
*/