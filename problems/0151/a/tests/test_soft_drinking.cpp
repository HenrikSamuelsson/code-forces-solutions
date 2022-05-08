#include "../source/soft_drinking.h"

#include "gtest/gtest.h"


TEST(SoftDrinkingTest, Examples)
{
    EXPECT_EQ(2, number_of_toasts(3, 4, 5, 10, 8, 100, 3, 1));
}