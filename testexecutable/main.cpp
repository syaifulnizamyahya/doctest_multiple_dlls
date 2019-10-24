#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
#include "doctest.h"
#include <cstdio>

TEST_CASE("testexecutable") {
    printf("I am a test from the testexecutable!\n");
}

DOCTEST_SYMBOL_IMPORT void from_dllA();
DOCTEST_SYMBOL_IMPORT void from_dllB();

int main(int argc, char** argv) {
    from_dllA();
    from_dllB();

    doctest::Context context(argc, argv);
    int doctestResults = context.run();
    
    if(context.shouldExit()) 
        return doctestResults;

    int client_stuff_return_code = 0;

    return doctestResults + client_stuff_return_code;
}
