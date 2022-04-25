#define CONFIG_CATCH_MAIN
#include <catch2/catch_test_macros.hpp>
#include "../Paint_Calculator/include/Paint_Calculator.hpp"

TEST_CASE("Test_Suite", "a Paint_Calculator object can be created, with arbritrary dimensions assigned to data members")
{
    CHECK(Paint_Calculator().get_width() == 1);
    CHECK(Paint_Calculator().get_length() == 1);
    CHECK(Paint_Calculator().get_height() == 1);
}