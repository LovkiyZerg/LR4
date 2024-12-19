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
            execute = 0;
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
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}


void sort_array(double *arr, int size){
    int num_of_neg_el = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] < 0 && i != num_of_neg_el){
            std::swap(arr[i], arr[num_of_neg_el]);
            ++num_of_neg_el;
            for(int j = i; j > num_of_neg_el; --j){
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}