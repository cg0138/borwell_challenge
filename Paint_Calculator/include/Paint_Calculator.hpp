#ifndef _PAINT_CALCULATOR_HPP_
#define _PAINT_CALCULATOR_HPP_
#include <iostream>



class Paint_Calculator 
{
    private:
        double width = 0;
        double length = 0;
        double height = 0;

    public:
    	Paint_Calculator();
        Paint_Calculator(double width_input, double length_input, double height_input);
        double get_width();
        double get_length();
        double get_height();
        double calculate_floor_area();
        double calculate_volume_of_room();
        double calculate_paint_needed();
    	~Paint_Calculator() = default;
};

#endif // _PAINT_CALCULATOR_HPP_