/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Implementation file for functions that 
            help move the game along
*****************************************************/
#include <iostream>
#include "helper_functions.hpp"
#include "Space.hpp"
#include "Main_Street.hpp"
#include "Tomorrow_Land.hpp"
#include "Fantasy_Land.hpp"
#include "Liberty_Square.hpp"
#include "Adventure_Land.hpp"
#include "Super_Awesome_Land.hpp"

using std::cout;
using std::stack;
using std::endl;

// Displays welcome menu, explains game, gives options
// Takes no parameters, returns nothing
void welcome()
{
    const int NUM_LANDS = 6;
    const int NUM_PINS = 3;
    const int MAX_MOVES = 20;
    
    stack<string> pins;
    
    
    
    int pins_to_find = NUM_PINS;
    
    cout<<"------------------------------------------------------------\n"
    <<"Welcome Disney World's Magic Kingdom!\n\n"
    <<"The Magic Kingdom is made up of "<<NUM_LANDS<<" lands for you to explore.\n"
    <<"     1 - Main Street\n"
    <<"     2 - Tomorrowland\n"
    <<"     3 - Fantasyland\n"
    <<"     4 - Liberty Square\n"
    <<"     5 - Adventureland\n"
    <<"     6 - Super Awesome Land\n\n"
    <<"Hidden within the lands are pins for you to find.\n"
    <<"They can be hidden anywhere, so look around, and interact\n"
    <<"with the characters.\n\n"
    <<"If you find "<<NUM_PINS<<" pins, you win and get to set off the \n"
    <<"fireworks tonight!\n\n"
    <<"You have "<<MAX_MOVES<<" moves to go between the lands of the Magic Kingdom\n\n"
    <<"What would you like to do?\n"
    <<"1. Enter the park \n"
    <<"2. Go back to your room and take a nap (Exit this game) \n"
    <<"------------------------------------------------------------\n";
    cout<<"Enter your choice: \t";
}

void enter_park()
{
//    Game game;
//    int land=0;
    bool keep_playing = true;
    Main_Street main_street;
    Tomorrow_Land tomorrow_land;
    Fantasy_Land fantasy_land;
    Liberty_Square liberty_square;
    Adventure_Land adventure_land;
    Super_Awesome_Land super_awesome_land;
    
    Space *ms_ptr  = &main_street;
    Space *tl_ptr  = &tomorrow_land;
    Space *fl_ptr  = &fantasy_land;
    Space *ls_ptr  = &liberty_square;
    Space *al_ptr  = &adventure_land;
    Space *sal_ptr = &super_awesome_land;
    
    Space *current = ms_ptr;
    
    main_street.set_pointers(tl_ptr, fl_ptr, ls_ptr, al_ptr);
    tomorrow_land.set_pointers(fl_ptr, ls_ptr, al_ptr, sal_ptr);
    fantasy_land.set_pointers(ls_ptr, al_ptr, sal_ptr, ms_ptr);
    liberty_square.set_pointers(al_ptr, sal_ptr, ms_ptr, tl_ptr);
    adventure_land.set_pointers(sal_ptr, ms_ptr, tl_ptr, fl_ptr);
    super_awesome_land.set_pointers(ms_ptr, tl_ptr, fl_ptr, ls_ptr);
    
//    current = ms_ptr;
    
    cout<<"------------------------------------------------------------\n"
        <<"When you enter the park, start on "<<current->get_park_name()<<endl;
//        <<"When you enter the park, start on Main Street"<<endl;

/*        <<"ms pointer " <<ms_ptr<<endl
        <<"tl pointer " <<tl_ptr<<endl
        <<"fl pointer " <<fl_ptr<<endl
        <<"ls pointer " <<ls_ptr<<endl
        <<"al pointer " <<al_ptr<<endl
        <<"sal pointer "<<sal_ptr<<endl;
*/        
   
    do
    {
        current->park_menu(current);
//        land=7;
        keep_playing = false;
    }while (keep_playing);
    

//    Space *main_street;
//    Space *tomorrowland;
//    Space *fantasyland;
//    Space *liberty_square;
//    Space *adventureland;
}