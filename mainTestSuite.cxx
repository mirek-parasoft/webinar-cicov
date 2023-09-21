#include "CppUTest/TestHarness.h"

int getValue(int, int);

TEST_GROUP(main)
{ 
void setup()
{
}
void teardown()
{
}
};

TEST(main, main_1)
{
    CHECK_EQUAL(getValue(2,2), 4);
}

TEST(main, main_2)
{
    CHECK_EQUAL(getValue(3,2), 6);
}

TEST(main, main_3)
{
    CHECK_EQUAL(getValue(1,1), 1);
}

TEST(main, main_4)
{
    CHECK_EQUAL(getValue(-1,1), 14);
}