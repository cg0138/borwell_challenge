#ifndef _PAINT_MENU_HPP_
#define _PAINT_MENU_HPP_

#include <sstream>

class Paint_Menu
{
    private:
        double width = 0;
        double length = 0;
        double height = 0;

    public:
        Paint_Menu();
        static void display_menu(std::ostream& output);
        static int user_menu_input();
        void display_sub_menus(int user_option, std::ostream& output);
        void input_width();
        void input_length();
        void input_height();
        ~Paint_Menu() = default;
};

#endif // _PAINT_MENU_HPP_