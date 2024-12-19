#include <iostream>
#include <algorithm>

#include "functions.h"


void get_execute(int* execute){
    *execute = 0;
    while(1){
        std::cin >> *execute;
        if(std::cin.fail() || (*execute != 1 && *execute != 0)){
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *execute = 0;
        } else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}

void get_int(int* x){
    *x = 0;
    while(1){
        std::cin >> *x;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        } else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}

void get_double(double* x){
    *x = 0;
    while(1){
        std::cin >> *x;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        } else {
            break;
        }
    }
}

void swap_lines(double **array, int i1, int i2, int size){
    for(int j = 0; j < size; ++j){
        std::swap(array[i1][j], array[i2][j]);
    }
}