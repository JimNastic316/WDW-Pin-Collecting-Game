/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Final Project - Day at WDW
Game where you try to collect pins and win extra 
time at Disney World
*****************************************************/   
#include <iostream>  
#include "check_input.hpp" 
#include "helper_functions.hpp" 

//#include "play_game.hpp" 
using std::cout;  
using std::cin;  
using std::endl;     

int main()  
{ 
    //http://www.cplusplus.com/reference/cstdlib/rand/ 
//    srand(time(0));
    const int START=1; 
    const int QUIT=2;     
    int play; 
    do
    {  
        welcome();

        play=string_to_num();  

        while(play<START||play>QUIT)  
        {
            cout<<"Invalid choice: \t";
            play=string_to_num(); 
            vfy_range(play, START, QUIT);  
        }   

        // Play game while play =1
        if (play==1)
        {
            enter_park();
             
 
  

        // Ask user if would like to play again
            cout<<"\n------------------------------------------------------------\n"        
            <<"Would you like to play again?\n"
            <<"1. Yes\n"
            <<"2. No\n"
            <<"------------------------------------------------------------\n";
            cout<<"Enter your choice: \t";
            play=string_to_num(); 

            while(play<START||play>QUIT)   
            {
                cout<<"Invalid choice: \t";
                play=string_to_num(); 
                vfy_range(play, START, QUIT);
            }  
        } 
    
        if (play==2)//<-------------------------ends game
        {
            cout<<"Good bye!"<<endl;
        }
    }while(play!=2);
    
// delete stuff
   
    return 0;
}
