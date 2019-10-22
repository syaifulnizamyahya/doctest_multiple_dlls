#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
#include "doctest.h"

DOCTEST_MAKE_STD_HEADERS_CLEAN_FROM_WARNINGS_ON_WALL_BEGIN
#include <cstdio>
DOCTEST_MAKE_STD_HEADERS_CLEAN_FROM_WARNINGS_ON_WALL_END

TEST_CASE("dllB") {
    printf("I am a test from the dllB!\n");
}

DOCTEST_SYMBOL_EXPORT void from_dllB();   // to silence "-Wmissing-declarations" with GCC
DOCTEST_SYMBOL_EXPORT void from_dllB() {} // force the creation of a .lib file with MSVC