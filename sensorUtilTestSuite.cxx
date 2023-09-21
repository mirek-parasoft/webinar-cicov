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


TEST(sensorUtil, smokeTest_reqCIC_1)
{
    int buf[5] = {1,2,3,4,5};
    CHECK_EQUAL(getAvarage(buf,5), 3);
}

TEST(sensorUtil, nullTest_reqCIC_2)
{
    int * buf = 0;
    CHECK_EQUAL(getAvarage(buf,5), 0);
}

TEST(sensorUtil, zerroSize_reqCIC_3)
{
    int buf[] = {1};
    CHECK_EQUAL(getAvarage(buf,0), 0);
}
