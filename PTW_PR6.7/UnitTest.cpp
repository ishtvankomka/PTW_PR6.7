#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Elem.h"

TEST_CASE( "Arguments initialized") {
    Elem* first = nullptr, *last = nullptr;
    enqueue(first, last, 1);
    enqueue(first, last, 9);
    replace(first, 1, 2);
    REQUIRE( first->info == 2);
}
