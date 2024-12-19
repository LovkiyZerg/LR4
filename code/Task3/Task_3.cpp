#include <iostream>
#include <algorithm>

#include "modules/functions.h"

int main(){
    setlocale(LC_ALL, "Russian");
    int execute = 0;
    do{
        system("clear");
        std::cout << "В вещественной матрице размером NxN найти максимальный и" << '\n' << "минимальный элементы. Переставить строки, в которых они" << '\n' << "находятся. Если они находятся в одной строке, выдать об этом" << '\n' << "сообщение." << std::endl;
        std::cout << "Выполнил Багаев Леонид" << std::endl;
        std::cout << "Вариант 1" << std::endl << '\n';
        std::cout << "Введите число - количество строк и столбцов матрицы"  << std::endl;
        int N;
        get_int(&N);
        double **array = new double*[N];
        for(int i = 0; i < N; ++i){
            array[i] = new double[N];
        }; 
        std::cout <<"Введите элементы матрицы" << std::endl;
        for (int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                get_double(&array[i][j]);
            };
        };
        double max = array[0][0], min = array[0][0];
        int max_i = 0, min_i = 0;
        std::cout << '\n' << "Исходная матрица:" << std::endl << '\n';
        for (int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                std::cout << array[i][j] << '\t';
                if(array[i][j] > max) {
                    max = array[i][j];
                    max_i = i;
                };
                if(array[i][j] < min){
                    min = array[i][j];
                    min_i = i;
                }
            };
            std::cout << std::endl;
        };
        std::cout << '\n' << "Максимальный элемент: " << max << std::endl;
        std::cout << "Минимальный элемент: " << min << std::endl << '\n';
        if(min_i == max_i){
            std::cout << "Максимальный и минимальный элементы в одной строке!" << std::endl;
        } else {
            std::cout << "Матрица, в которой строки с максимальным и минимальным элементами поменяны местами:" << std::endl;
            swap_lines(array, max_i, min_i, N);
            for (int i = 0; i < N; ++i){
                for(int j = 0; j < N; ++j){
                    std::cout << array[i][j] << '\t';
                };
                std::cout << std::endl;
            };
        };
        for(int i = 0; i < N; ++i){
            delete[] array[i];
            array[i] = nullptr;
        };
        delete [] array;
        array = nullptr;
        std::cout << '\n' << "Чтобы перезапустить программу, введите 1" << '\n' << "Чтобы закрыть программу, введите 0" << std::endl;
        get_execute(&execute);
    } while(execute == 1);
}


