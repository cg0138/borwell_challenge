#ifndef _PAINT_MENU_HPP_
#define _PAINT_MENU_HPP_

#include <sstream>

class Paint_Menu
{
    public:
        Paint_Menu();
        static void display_menu(std::ostream& output);
        static int user_menu_input();
        static void display_sub_menus(int user_option, std::ostream& output);
        ~Paint_Menu();
};

#endif // _PAINT_MENU_HPP_