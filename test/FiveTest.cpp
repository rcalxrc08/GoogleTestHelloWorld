#include <cassert>

#include "gtest/gtest.h"
#include "functions.hpp"

TEST(Five, BaseCase)
{
    ASSERT_EQ(5, five(0));
}

TEST(Five, MulBaseCase)
{
    ASSERT_EQ(5, five(1));
    ASSERT_EQ(5, five(2));
    ASSERT_EQ(5, five(3));
    ASSERT_EQ(5, five(4));
    ASSERT_EQ(5, five(5));
}
