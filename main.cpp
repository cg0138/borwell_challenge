#include <iostream>
#include "./Paint_Calculator/include/Paint_Calculator.hpp"
#include "./Paint_Calculator/include/Paint_Menu.hpp"

int main() {
	Paint_Menu paint_menu;

	do
	{
		paint_menu.display_menu(std::cout);
		paint_menu.display_sub_menus(Paint_Menu::user_menu_input(), std::cout, std::cin);

	} while(true);

	return 0;
}
