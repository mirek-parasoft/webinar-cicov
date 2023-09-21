#include "CppUTest/TestHarness.h"
#include "include/main.hxx"


TEST_GROUP(main)
{ 
void setup()
{
}
void teardown()
{
}
};

TEST(main, main_1_reqCIC_4)
{
    CHECK_EQUAL(getValue(2,2), 4);
}

TEST(main, main_2_reqCIC_reqCIC_5)
{
    CHECK_EQUAL(getValue(3,2), 6);
}

TEST(main, main_3_reqCIC_5)
{
    CHECK_EQUAL(getValue(1,1), 1);
}

/*
TEST(main, main_4_reqCIC_6)
{
    CHECK_EQUAL(getValue(-1,1), 1);
}

TEST(main, main_5_reqCIC_6)
{
    CHECK_EQUAL(getValue(1,-1), 1);
}
*/