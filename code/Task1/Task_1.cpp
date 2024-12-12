#include <iostream>
#include <algorithm>

void get_execute(int&);
void get_double(double&);
void sort_array(double*, int);


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
            get_double(raw_array[i]);
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
        get_execute(execute);
    } while(execute == 1);
}

void get_execute(int& execute){
    execute = 0;
    while(1){
        std::cin >> execute;
        if(std::cin.fail() || (execute != 1 && execute != 0)){
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

void get_double(double& x){
    x = 0;
    while(1){
        std::cin >> x;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            x = 0;
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