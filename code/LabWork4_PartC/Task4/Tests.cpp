#include "gtest/gtest.h"

extern "C" {
    #include "modules/functions.h"
}

TEST(task4, float_max){
    float a = 3.14;
    float b = 5.68;
    EXPECT_EQ(floatmax(a,b), b);
}