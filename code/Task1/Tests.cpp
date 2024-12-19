#include "gtest/gtest.h"

#include "modules/functions.h"

TEST(task1, simple_swap){
    double init_arr[10] = {1,2,3,4,-5,6,-7,8,9,-10};
    sort_array(init_arr, 10);
    double result_arr[10] = {-5,-7,-10,1,2,3,4,6,8,9};
    for(int i = 0; i < 10; ++i){
        EXPECT_EQ(init_arr[i], result_arr[i]);
    }
}