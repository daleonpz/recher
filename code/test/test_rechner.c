#include "unity.h"
#include "rechner.h"

void setUp(void)
{
}

void tearDown()
{
}

void test_SquareOfFive(void)
{
    int16_t result;
    int16_t x = 5;

    result = mySqrt(x);

    TEST_ASSERT_EQUAL_INT16(25, result);
}

void test_SquareOfAnyNumber(void)
{
    int16_t result;
    int16_t x = 20;

    result = mySqrt(x);

    TEST_ASSERT_EQUAL_INT16(400, result);
}

void test_SquareOfABigNumber(void)
{
    int32_t result;
    int16_t x = 1000;

    result = mySqrt(x);

    TEST_ASSERT_EQUAL_INT32(1000000, result);
}

