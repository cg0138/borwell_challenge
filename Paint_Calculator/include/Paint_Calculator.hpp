#ifndef _PAINT_CALCULATOR_HPP_
#define _PAINT_CALCULATOR_HPP_
#include <iostream>

class Paint_Calculator 
{
    private:
        double width = 1;
        double length = 1;
        double height = 1;

    public:
    	Paint_Calculator();
        double get_width();
        double get_length();
        double get_height();
    	~Paint_Calculator() = default;
};

#endif // _PAINT_CALCULATOR_HPP_