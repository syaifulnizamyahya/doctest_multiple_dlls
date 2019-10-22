#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
#include "doctest.h"
#include <cstdio>

TEST_CASE("dllA") {
    printf("I am a test from the dllA!\n");
}

DOCTEST_SYMBOL_EXPORT void from_dllA();   
DOCTEST_SYMBOL_EXPORT void from_dllA() {} 
