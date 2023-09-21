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
    int buf[5] = {1,2,3,4,5};
    CHECK_EQUAL(getAvarage(buf,5), 3);
}