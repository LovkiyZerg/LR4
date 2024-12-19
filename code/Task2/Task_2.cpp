#include <iostream>

#include "modules/functions.h"

double array[6][6] = {{1, 2, -3, -8, -15, 0}, {4, 11, 9, -4, -6, 6}, {-8, 11, -12, -4, -1, 23}, {15, 1, -3, 7, 73, -8}, {-5, 8, -7, 2, -5, 9}, {2, 7, -2, 14, 15, 1}};

const int M = 6;
const int N = 6;

int main() {
    int execute = 0;
    do{
        system("clear");
        std::cout << "Определить количество положительных элементов, расположенных" << '\n' << "ниже побочной диагонали матрицы." << std::endl;
        std::cout << "Выполнил Багаев Леонид" << std::endl;
        std::cout << "Вариант 1" << std::endl << '\n';
        std::cout << "Данный массив:" << std::endl;
        int count = 0;
        for (int i = 0; i < M; ++i){
            for(int j = 0; j < N; ++j){
                std::cout << array[i][j] << '\t';
            }
            std::cout << std::endl;
        }
        count = count_positives_under_diag(array,M);
        std::cout << '\n';
        std::cout << "Количество положительных чисел ниже побочной диагонали: " << count << std::endl << '\n';
        std::cout << "Чтобы перезапустить программу, введите 1" << '\n' << "Чтобы закрыть программу, введите 0" << std::endl;
        get_execute(&execute);
    } while(execute == 1);
}


