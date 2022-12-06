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

TEST_CASE("Task B: goodVibes()") {
    std::vector<int> v1{-1, 2, 3, -4, 5, 6, -7, -8, -9, 10, -11, 12, -13};
    std::vector<int> v1_fixed{2, 3, 5, 6, 10, 12};
    std::vector<int> v2{0, -10, -123, -2348932, -2384, -23894};
    std::vector<int> v2_fixed;
    std::vector<int> v3{3248, 238423, 29349, 983247, 63274, 32874672, 238492};
    std::vector<int> v3_fixed{3248, 238423, 29349, 983247, 63274, 32874672, 238492};
    CHECK(goodVibes(v1) == v1_fixed);
    CHECK(goodVibes(v2) == v2_fixed);
    CHECK(goodVibes(v3) == v3_fixed);
}

TEST_CASE("Task C: gogeta()") {
    std::vector<int> v0;
    std::vector<int> v1{-1, 2, 3, -4, 5, 6};
    std::vector<int> v2{0, -10, -123, 2348932, 2384, 23894};
    std::vector<int> v1_and_2{-1, 2, 3, -4, 5, 6, 0, -10, -123, 2348932, 2384, 23894};
    gogeta(v1, v2);
    CHECK(v1 == v1_and_2);
    CHECK(v2 == v0);
}

TEST_CASE("Task D: sumPairWise()") {
    std::vector<int> v1{-1, 2, 3, -4, 5, 6};
    std::vector<int> v2{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v3{10, 20, 30, 40};
    std::vector<int> v4{1, 2, 3, 4};
    std::vector<int> v1_and_2{0, 4, 6, 0, 10, 12, 7, 8, 9};
    std::vector<int> v2_and_3{11, 22, 33, 44, 5, 6, 7, 8, 9};
    std::vector<int> v3_and_4{11, 22, 33, 44};

    CHECK(sumPairWise(v1, v2) == v1_and_2);
    CHECK(sumPairWise(v2, v3) == v2_and_3);
    CHECK(sumPairWise(v3, v4) == v3_and_4);
}
