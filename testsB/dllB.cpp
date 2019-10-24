#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
#include "doctest.h"
#include <cstdio>

TEST_CASE("dllB") {
    printf("I am a test from the dllB!\n");
}

DOCTEST_SYMBOL_EXPORT void from_dllB();   
DOCTEST_SYMBOL_EXPORT void from_dllB() {} 
