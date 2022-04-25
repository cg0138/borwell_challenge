#include "./include/Paint_Calculator.hpp"
#include <iostream>

Paint_Calculator::Paint_Calculator()
{}

double Paint_Calculator::get_width()
{
	return this->width;
}

double Paint_Calculator::get_length()
{
	return this->length;
}

double Paint_Calculator::get_height()
{
	return this->height;
}

double Paint_Calculator::calculate_floor_area()
{
	return this->length * this->width;
}
