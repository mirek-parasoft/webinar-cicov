#include <intrinsics.h>
#include <stdio.h>

#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestPlugin.h"
#include "CppUTest/TestRegistry.h"


int main(int ac, char** av)
{
    //MyDummyComparator dummyComparator;
    //MockSupportPlugin mockPlugin;
    //IEEE754ExceptionsPlugin ieee754Plugin;

    //mockPlugin.installComparator("MyDummyType", dummyComparator);
    //TestRegistry::getCurrentRegistry()->installPlugin(&mockPlugin);
    //TestRegistry::getCurrentRegistry()->installPlugin(&ieee754Plugin);
    return CommandLineTestRunner::RunAllTests(0, (char **)0);
}



int getValue(int a, int b)
{
    if ((a > 0) && (b > 0)) {
        return a * b;
    }

    if (a > 0) {
        return a;
    } else {
        return b;
    }

    return 0;
}