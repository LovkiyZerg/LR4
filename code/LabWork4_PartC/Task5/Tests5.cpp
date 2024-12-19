#include "gtest/gtest.h"

extern "C" {
    #include "modules/functions.h"
}

TEST(task5, simple_field){
    char field_input [20] = "*.*.*.*...*.";

    long int n = 3;
    long int m = 4;

    int **init_field = NULL;
    init_field = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; ++i){
        init_field[i] = (int*)malloc(m * sizeof(int));
    }


    fill_field(field_input, n, m, init_field);

    int result[3][4] = {{0,4,0,2},{0,5,0,3},{1,3,0,2}};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            EXPECT_EQ(init_field[i][j], result[i][j]);
        }
    }

        for(int i = 0; i < 3; ++i){
            free(init_field[i]);
            init_field[i] = NULL;
        }
        free(init_field);
        init_field = NULL;
}