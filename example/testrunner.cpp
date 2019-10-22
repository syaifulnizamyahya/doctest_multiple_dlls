#include "testrunner.h"

DOCTEST_MAKE_STD_HEADERS_CLEAN_FROM_WARNINGS_ON_WALL_BEGIN
#include <cstdio>
DOCTEST_MAKE_STD_HEADERS_CLEAN_FROM_WARNINGS_ON_WALL_END

TEST_CASE("implementation") {
    printf("I am a test from the implementation!\n");
}
