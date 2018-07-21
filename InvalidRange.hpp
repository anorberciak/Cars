#pragma once
#include <stdexcept>
#include<string>

class InvalidRange : public std::out_of_range 
{
public:
	InvalidRange(std::string);
};

