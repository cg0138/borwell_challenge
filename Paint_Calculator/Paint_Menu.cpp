#include <iostream>
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

void Paint_Menu::display_sub_menus(int user_option, std::ostream& output)
{
    switch (user_option)
    {   
        case 1:
        {
            output << "Please enter the room width (m): ";
            this->input_width();
            break;
        }

        case 2:
        {
            output << "Please enter the room length (m): ";
            this->input_length();
            break;
        }

        case 3:
        {
            output << "Please enter the room height (m): ";
            this->input_height();
            break;
        }

        case 4:
        {
            output << "The floor area of the room (m2): ";
            break;
        }

        case 5:
        {
            output << "The volume of the room (m3): ";
            break;
        }

        case 6:
        {
            output << "The amount of paint needed to decorate the room (m2): ";
            break;
        }

        default:
            break;
    }
}

void Paint_Menu::input_width()
{
    double input_width = 0;
    std::cin >> input_width;
    this->width = input_width;
}

void Paint_Menu::input_length()
{
    double input_length = 0;
    std::cin >> input_length;
    this->length = input_length;
}

void Paint_Menu::input_height()
{
    double input_height = 0;
    std::cin >> input_height;
    this->height = input_height;
}