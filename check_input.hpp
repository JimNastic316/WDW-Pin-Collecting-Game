/****************************************************
Author: James Underwood 
Date: 11/03/2019
Description: Header file for check_input.  
Ensures input is an integer value.
******************************************************/
#ifndef CHECK_INPUT_HPP
#define CHECK_INPUT_HPP
#include <string>

// Gets string input, and if valid, converts to int
int string_to_num();

// Takes a string value, checks every character to see if isdigit
// if so, returns true
bool all_num(std::string);

// Takes a string and converts to integer
int make_string_int(std::string);

// Takes 3 integers, verifies the 1st one is between the 2nd and 3rd
bool vfy_range(int, int, int);

#endif