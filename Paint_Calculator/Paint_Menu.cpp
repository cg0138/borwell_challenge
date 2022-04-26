#include <iostream>
#include <string>
#include ".\include\Paint_Menu.hpp"

Paint_Menu::Paint_Menu()
{}

void Paint_Menu::display_menu(std::ostream& output)
{
    output << "Welcome to the Paint Menu\n\n"
           << "Please select an option:\n"
           << "    1. Enter room width\n"
           << "    2. Enter room length\n"
           << "    3. Enter room height\n"
           << "    4. Calculate floor area\n"
           << "    5. Calculate room volume\n"
           << "    6. Calculate paint needed\n";
}

int Paint_Menu::user_menu_input()
{
    int user_option = 0;
    std::cin >> user_option;
    return user_option;
}

void Paint_Menu::display_sub_menus(std::string user_option, std::ostream& output, std::istream& input)
{
    int user_option_num = std::stoi(user_option);
    
    switch (user_option_num)
    {   
        case 1:
        {
            output << "Please enter the room width (m): ";
            this->input_width(input);
            break;
        }

        case 2:
        {
            output << "Please enter the room length (m): ";
            this->input_length(input);
            break;
        }

        case 3:
        {
            output << "Please enter the room height (m): ";
            this->input_height(input);
            break;
        }

        case 4:
        {
            output << "The floor area of the room (m2): ";
            this->generate_calculator().calculate_floor_area();
            break;
        }

        case 5:
        {
            output << "The volume of the room (m3): ";
            this->generate_calculator().calculate_volume_of_room();
            break;
        }

        case 6:
        {
            output << "The amount of paint needed to decorate the room (m2): ";
            this->generate_calculator().calculate_paint_needed();
            break;
        }

        default:
            break;
    }
}

void Paint_Menu::input_width(std::istream& input)
{
    double input_width = 0;
    input >> input_width;
    this->width = input_width;
}

void Paint_Menu::input_length(std::istream& input)
{
    double input_length = 0;
    input >> input_length;
    this->length = input_length;
}

void Paint_Menu::input_height(std::istream& input)
{
    double input_height = 0;
    input >> input_height;
    this->height = input_height;
}

Paint_Calculator Paint_Menu::generate_calculator()
{
    Paint_Calculator paint_calculator (this->width, this->length, this->height);
    return paint_calculator;
}