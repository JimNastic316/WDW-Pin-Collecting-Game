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
#include "check_input.hpp"
using std::cout;
using std::endl;

Fantasy_Land::Fantasy_Land()
{
    set_park_name("Fantasy Land");
    set_character("Goofy");
    set_treat_choice(0);
    set_ride_choice(0);
}

// Destructor
Fantasy_Land::~Fantasy_Land()
{
    
}

void Fantasy_Land::enjoy_a_treat()
{
    const int MIN=1;
    const int MAX=4;
    
    
    cout<<"------------------------------------------------------------\n"
        <<"Treat menu at "<<this->get_park_name()<<endl
        <<"     1 - Pizza\n"
        <<"     2 - Hot dogs\n"
        <<"     3 - Pretzel\n"
        <<"     4 - Mystery Item\n"
        <<"\nIt all sounds good, what do you want?\t";
        
        int choice = string_to_num();
        
        while(choice<MIN||choice>MAX)  
        {
            cout<<"Invalid choice: \t";
            choice=string_to_num(); 
            vfy_range(choice, MIN, MAX);  
        }
        
        cout<<"Enjoy!"<<endl;
}