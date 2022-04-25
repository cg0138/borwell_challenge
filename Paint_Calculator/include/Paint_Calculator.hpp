#ifndef _PAINT_CALCULATOR_HPP_
#define _PAINT_CALCULATOR_HPP_
#include <iostream>

/*
how many coats
price of paint / size of tin / coverage of tin for the total price
include/exclude walls
estimated time
search for local diy stores
search online for prices
*/

class Paint_Calculator 
{
    private:
        double width = 0;
        double length = 0;
        double height = 0;

    public:
    	Paint_Calculator();
        double get_width();
        double get_length();
        double get_height();
        double calculate_floor_area();
        double calculate_volume_of_room();
        double calculate_paint_needed();
    	~Paint_Calculator() = default;
};

#endif // _PAINT_CALCULATOR_HPP_