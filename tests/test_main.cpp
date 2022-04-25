#define CONFIG_CATCH_MAIN
#include <catch2/catch_test_macros.hpp>
#include "../Paint_Calculator/include/Paint_Calculator.hpp"

TEST_CASE("a Paint_Calculator object can be created, with arbritrary dimensions assigned to data members")
{
    CHECK(Paint_Calculator().get_width() == 0);
    CHECK(Paint_Calculator().get_length() == 0);
    CHECK(Paint_Calculator().get_height() == 0);
}

TEST_CASE("the method calculate_floor_area() returns the floor area")
{
    CHECK(Paint_Calculator().calculate_floor_area() == 0);
}