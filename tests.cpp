#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Task A: makeVector()") {
    std::vector<int> v0;
    std::vector<int> v1{0, 1, 2, 3, 4, 5, 6, 7};
    std::vector<int> v2{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    CHECK(makeVector(8) == v1);
    CHECK(makeVector(15) ==  v2);
    CHECK(makeVector(0) == v0);
}
