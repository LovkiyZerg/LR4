#include <iostream>

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


double count_positives_under_diag (double array[6][6], int M) {
    int count = 0;
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < M; ++j){
            if( array[i][j] > 0  && (j > M-i-1) ){
            ++count;
            }
        }
    }
    return count;
}