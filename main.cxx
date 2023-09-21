#include <intrinsics.h>
#include <stdio.h>

#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestPlugin.h"
#include "CppUTest/TestRegistry.h"
#include "cpptest/extensions/cpputest/results_listener.h"
#include "include/main.hxx"


int main(int ac, char** av)
{
    const char * av_override[] = { "exe", "-v", "-ojunit" }; //turn on verbose mode
    return CommandLineTestRunner::RunAllTests(3, (char **)av_override);
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