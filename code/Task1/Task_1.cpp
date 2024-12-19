#include <iostream>
#include <algorithm>

#include "modules/functions.h"


double raw_array[10];
double sorted_array[10];

const int k = 10;

int main () {
    int execute = 0;
    do{
        system("clear");
        std::cout << "Преобразовать массив следующим образом: все отрицательные" << '\n' << "элементы массива перенести в начало, сохранив исходное взаимное" << '\n' << "расположение, как среди отрицательных, так и среди остальных" << '\n' << "элементов массива." << std::endl;
        std::cout << "Выполнил Багаев Леонид" << std::endl;
        std::cout << "Вариант 1" << std::endl << '\n';
        std::cout << "Введите 10 элементов массива" << std::endl;
        for (int i = 0; i < k; ++i){
            get_double(&raw_array[i]);
        }
        for(int i = 0; i < k; ++i){
            sorted_array[i] = raw_array[i];
        }
        sort_array(sorted_array, k);
        std::cout << "Изначальный массив:" << '\t';
        for (int i = 0; i < k; ++i){
            std::cout << raw_array[i] << "  ";
        }
        std::cout << std::endl;
        std::cout << "Отсортированный массив:" << '\t';
        for(int i = 0; i < k; ++i){
            std::cout << sorted_array[i] << "  ";
        }
        std::cout << std::endl;
        std::cout << "Чтобы перезапустить программу, введите 1" << '\n' << "Чтобы закрыть программу, введите 0" << std::endl;
        get_execute(&execute);
    } while(execute == 1);
}

