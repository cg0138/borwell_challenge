#ifndef _PAINT_MENU_HPP_
#define _PAINT_MENU_HPP_

#include <sstream>
#include "Paint_Calculator.hpp"

class Paint_Menu
{
    private:
        double width = 0;
        double length = 0;
        double height = 0;

    public:
        Paint_Menu();
        static void display_menu(std::ostream& output);
        static std::string user_menu_input();
        void display_sub_menus(std::string user_option, std::ostream& output, std::istream& input);
        void input_width(std::istream& input);
        void input_length(std::istream& input);
        void input_height(std::istream& input);
        Paint_Calculator generate_calculator();
        ~Paint_Menu() = default;
};

#endif // _PAINT_MENU_HPP_