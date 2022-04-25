#define CONFIG_CATCH_MAIN
#include <catch2/catch_test_macros.hpp>
#include "../Paint_Calculator/include/Paint_Calculator.hpp"

TEST_CASE("a Paint_Calculator object can be created, with arbritrary dimensions assigned to data members")
{
    CHECK(Paint_Calculator().get_width() == 0);
    CHECK(Paint_Calculator().get_length() == 0);
    CHECK(Paint_Calculator().get_height() == 0);
}

TEST_CASE("the method calculate_floor_area() returns the initial floor area")
{
    CHECK(Paint_Calculator().calculate_floor_area() == 0);
}

TEST_CASE("the method calculate_volume_of_room() returns the initial volume of the room")
{
    CHECK(Paint_Calculator().calculate_volume_of_room() == 0);
}

TEST_CASE("the method calculate_paint_needed() returns the area of the initial 4 walls")
{
    CHECK(Paint_Calculator().calculate_paint_needed() == 0);
}

TEST_CASE("Paint_Calculator constructor accepts width, length and height arguments and assigns to data members")
{
    Paint_Calculator test(1, 2, 3);
    CHECK(test.get_width() == 1);
    CHECK(test.get_length() == 2);
    CHECK(test.get_height() == 3);
}

TEST_CASE("overloaded constructor calculates the correct floor area")
{
    Paint_Calculator test(1, 2, 3);
    CHECK(test.calculate_floor_area() == 2);
}