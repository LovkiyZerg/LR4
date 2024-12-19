#include "gtest/gtest.h"

#include "modules/functions.h"

TEST(task2, acdc){
    double array[6][6] = {{1, 2, -3, -8, -15, 0}, {4, 11, 9, -4, -6, 6}, {-8, 11, -12, -4, -1, 23}, {15, 1, -3, 7, 73, -8}, {-5, 8, -7, 2, -5, 9}, {2, 7, -2, 14, 15, -1}};
    int M = 6;
    int count = count_positives_under_diag(array, M);
    int result = 9;
    EXPECT_EQ(count, result);
}