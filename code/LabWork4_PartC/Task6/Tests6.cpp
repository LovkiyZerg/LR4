#include "gtest/gtest.h"


extern "C" {
    #include "modules/functions.h"
}

TEST(task6, simple_swap){
    int **square = NULL;
    square = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; ++i){
        square[i] = (int*)malloc(3 * sizeof(int));
    }
    int count = 1;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            square[i][j] = count;
            ++count;
        }
    }
    int final_arr[3][3] = {{1,2,5},{4,3,6},{7,8,9}};
    swap(square, 0, 2, 1, 1);
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            EXPECT_EQ(square[i][j], final_arr[i][j]);
        }
    }
    for(int i = 0; i < 3; ++i){
            free(square[i]);
            square[i] = NULL;
        }
        free(square);
        square = NULL;
}


