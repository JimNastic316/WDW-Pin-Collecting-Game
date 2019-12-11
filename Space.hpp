/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Header file for class Space
*****************************************************/ 
#ifndef SPACE_HPP
#define SPACE_HPP
#include<iostream>
#include <stack> 
using std::stack;
using std::string;


class Space 
{
private:

protected:
    string park_name;
    string character;
    int treat_choice;
    int ride_choice;
    
    stack <string> pin;
    
    Space *top;
    Space *right;
    Space *left;
    Space *bottom;
    

public:
    // Constructor
    Space();

    // Destructor
    virtual~Space();
    
    // Setters
    void set_park_name(string park_name);
    void set_character(string character);
    void set_treat_choice(int treat_choice);
    void set_ride_choice(int ride_choice);
    void set_pointers(Space *top, Space *right, Space *left, Space *bottom);
   
    
    // Getters
    string get_park_name();
    string get_character();
    int get_treat_choice();
    int get_ride_choice();
    Space get_top();
    Space get_right();
    Space get_left();
    Space get_bottom();
    
    // Game functions
    virtual void talk_to_character();
    virtual void enjoy_a_treat();
    virtual void go_on_a_ride();
//    void hop_to_another_land();
    Space hop_to_top(Space *current);
    Space hop_to_right(Space *current);        
    Space hop_to_left(Space *current);
    Space hop_to_bottom(Space *current);
    
    void park_menu(Space *current);
    
    
};
#endif