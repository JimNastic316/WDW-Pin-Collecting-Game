/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Implementation file for class Tomorrow_Land
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

Tomorrow_Land::Tomorrow_Land()
{
    set_park_name("Tomorrow_Land");
    set_character("Buzz Light Year");
    set_treat_choice(0);
    set_ride_choice(0);
}

// Destructor
Tomorrow_Land::~Tomorrow_Land()
{
    
}

void Tomorrow_Land::talk_to_character() 
{
        cout<<"------------------------------------------------------------\n"
        <<this->character<<": To Infinity and BEYOND!"<<endl;
        
}