#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void get_float(float* x){
    *x = 0;
    while(1){
        char buffer [128];
        scanf("%s", buffer);
        char* end = buffer;
        *x = strtof(buffer, &end);
        if(end == buffer){
            printf("Неверный ввод! Введите число заново \n");
            *x = 0;
        } else {
            break;
        }
    }
}

float floatmax(float x, float y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}