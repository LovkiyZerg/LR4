#include "gtest/gtest.h"

#include "modules/functions.h"

TEST(task3, simple_lines_swap){
    int N = 3;
    double **array = new double*[N];
        for(int i = 0; i < N; ++i){
            array[i] = new double[N];
        };
        int count = 0;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                array[i][j] = count;
                ++count;
            }
        } 

        double result[3][3] = {{0,1,2},{6,7,8},{3,4,5}};

        swap_lines(array, 1, 2, 3);

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                EXPECT_EQ(array[i][j], result[i][j]);
            }
        }



         for(int i = 0; i < N; ++i){
            delete[] array[i];
            array[i] = nullptr;
        };
        delete [] array;
        array = nullptr;
}