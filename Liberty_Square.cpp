/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Implementation file for class Liberty_Square
*****************************************************/
#include "Space.hpp"
#include "Main_Street.hpp"
#include "Tomorrow_Land.hpp"
#include "Fantasy_Land.hpp"
#include "Liberty_Square.hpp"
#include "Adventure_Land.hpp"
#include "Super_Awesome_Land.hpp"
using std::cout;
using std::endl;

Liberty_Square::Liberty_Square()
{
    set_park_name("Liberty Square");
    set_character("Mickey Mouse");
    set_treat_choice(0);
    set_ride_choice(0);
//    set_pointers(&tommorow_land, &fantasy_land, &liberty_square, &adventureland)
    
}

// Destructor
Liberty_Square::~Liberty_Square()
{
    
}