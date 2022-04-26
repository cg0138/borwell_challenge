#define CONFIG_CATCH_MAIN
#include <catch2/catch_test_macros.hpp>
#include <sstream>
#include "../Paint_Calculator/include/Paint_Calculator.hpp"
#include "../Paint_Calculator/include/Paint_Menu.hpp"

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

TEST_CASE("overloaded constructor calculates the correct room volume")
{
    Paint_Calculator test(1, 2, 3);
    CHECK(test.calculate_volume_of_room() == 6);
}

TEST_CASE("overloaded constructor calculates the correct paint needed for the 4 walls")
{
    Paint_Calculator test(1, 2, 3);
    CHECK(test.calculate_paint_needed() == 18);
}

TEST_CASE("a menu is displayed when display_menu() is called")
{
    std::stringstream ss;
    Paint_Menu test;
    test.display_menu(ss);

    std::string s1 = "\nWelcome to the Paint Menu\n\n";
    std::string s2 = "Please select an option:\n";
    std::string s3 = "    1. Enter room width\n";
    std::string s4 = "    2. Enter room length\n";
    std::string s5 = "    3. Enter room height\n";
    std::string s6 = "    4. Calculate floor area\n";
    std::string s7 = "    5. Calculate room volume\n";
    std::string s8 = "    6. Calculate paint needed\n";

    std::string temp = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8;

    CHECK(ss.str() == temp);
}
 
TEST_CASE("each menu option displays a new sub menu")
{
    std::stringstream ss;
    std::stringstream is("1"); // this passes in a 1 to the input stream for testing
    Paint_Menu test;

    test.display_sub_menus("1", ss, is);
    CHECK(ss.str() == "Please enter the room width (m): ");
    ss.str(""); // empties the stringstream after each test
    
    test.display_sub_menus("2", ss, is);
    CHECK(ss.str() == "Please enter the room length (m): ");
    ss.str("");
    
    test.display_sub_menus("3", ss, is);
    CHECK(ss.str() == "Please enter the room height (m): ");
    ss.str("");
    
    test.display_sub_menus("4", ss, is);
    CHECK(ss.str() == "The floor area of the room (m2): ");
    ss.str("");
    
    test.display_sub_menus("5", ss, is);
    CHECK(ss.str() == "The volume of the room (m3): ");
    ss.str("");
    
    test.display_sub_menus("6", ss, is);
    CHECK(ss.str() == "The amount of paint needed to decorate the room (m2): ");
    ss.str("");
}

TEST_CASE("a Paint_Calculator object can be constructed within Paint_Menu, and calculations performed")
{
    std::stringstream ss;
    std::stringstream width("2"); // these 3 variables pass in 2, 4, 6 to the width, length, height respecyively (for testing)
    std::stringstream length("4");
    std::stringstream height("6");
    Paint_Menu test;

    test.display_sub_menus("1", ss, width);
    ss.str(""); // empties the stringstream after each test
    
    test.display_sub_menus("2", ss, length);
    ss.str("");
    
    test.display_sub_menus("3", ss, height);
    ss.str("");
    
    Paint_Calculator temp = test.generate_calculator();

    CHECK(temp.get_width() == 2);
    CHECK(temp.get_length() == 4);
    CHECK(temp.get_height() == 6);
    CHECK(temp.calculate_floor_area() == 8);
    CHECK(temp.calculate_volume_of_room() == 48);
    CHECK(temp.calculate_paint_needed() == 72);
}