/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Implementation file for class Main_Street
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
Main_Street::Main_Street()
{
    set_park_name("Main Street");
    set_character("Winnie the Pooh");
    set_treat_choice(0);
    set_ride_choice(0);
//    set_pointers(tl_ptr, fl_ptr, ls_ptr, al_ptr);
//    set_pointers(&tommorow_land, &fantasy_land, &liberty_square, &adventureland)
    
}

// Destructor
Main_Street::~Main_Street()
{
    
}