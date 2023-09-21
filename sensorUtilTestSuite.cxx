#include "CppUTest/TestHarness.h"
#include "include/sensorUtil.hxx"

int getValue(int, int);

TEST_GROUP(sensorUtil)
{ 
void setup()
{
}
void teardown()
{
}
};

TEST(sensorUtil, smokeTest)
{
    CHECK_EQUAL(4, 4);
}
