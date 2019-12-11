/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Implementation file for class Space
*****************************************************/ 
#include "Space.hpp"
#include "check_input.hpp"
using std::cout;
using std::endl;

// Constructor
Space::Space()
{
    set_park_name("No Park Name");
    set_character("No Character");
    set_treat_choice(0);
    set_ride_choice(0);
    set_pointers(top, right, left, bottom);
}

// Destructor
Space::~Space()
{
    
}

// Setters

void Space::set_park_name(string p)
{
    this->park_name=p;
}


void Space::set_character(string n)
{
    this->character=n;
}

void Space::set_treat_choice(int t)
{
    this->treat_choice=t;
}

void Space::set_ride_choice(int r)
{
    this->ride_choice=r;
}

void Space::set_pointers(Space *t, Space *r, Space *l, Space *b)
{
    top=t;
    right=r;
    left=l;
    bottom=b;
}

// Getters

string Space::get_park_name()
{
    return park_name;
}

string Space::get_character()
{
    return character;
}

int Space::get_treat_choice()
{
    return treat_choice;
}

int Space::get_ride_choice()
{
    return ride_choice;
}

// Functinon that makes character talk to user
void Space::talk_to_character()
{
    cout<<"------------------------------------------------------------\n"
        <<this->character<<": Hello! Enjoy your time at "
        <<this->park_name<<"!"<<endl;
}


void Space::enjoy_a_treat()
{
    const int MIN=1;
    const int MAX=3;
    
    
    cout<<"------------------------------------------------------------\n"
        <<"Treat menu at "<<this->get_park_name()<<endl
        <<"     1 - Ice cream\n"
        <<"     2 - Popcorn\n"
        <<"     3 - Cookies\n"
        <<"\nIt all sounds good, what do you want?\t";
        
        int choice = string_to_num();
        
        while(choice<MIN||choice>MAX)  
        {
            cout<<"Invalid choice: \t";
            choice=string_to_num(); 
            vfy_range(choice, MIN, MAX);  
        }
        if(choice == 3)
        {
            cout<<"You found a pin!"<<endl;
            pin.push("Cookie Pin");
            if (pin.size()==3)
            {
                cout<<"You WON! You can set off the fireworks tonight!"<<endl;
            }
        }
        
        cout<<"Enjoy!"<<endl;
}

void Space::go_on_a_ride()
{
    const int MIN=1;
    const int MAX=3;
    
    cout<<"------------------------------------------------------------\n"
        <<"Rides at "<<this->get_park_name()<<endl
        <<"     1 - Ferris Wheel\n"
        <<"     2 - Haunted House\n"
        <<"     3 - Giant Swing\n"
        <<"\nWhich ride sounds good?\t";
        
        int choice = string_to_num();
        
        while(choice<MIN||choice>MAX)  
        {
            cout<<"Invalid choice: \t";
            choice=string_to_num(); 
            vfy_range(choice, MIN, MAX);  
        }
        
        cout<<"That was fun!"<<endl;
}

Space Space::hop_to_top(Space *c)
{
    Space new_current = c->get_top();  
    return new_current;
    //cout<<"hop_to_top();"<<endl;
}

Space Space::hop_to_right(Space *c)
{
    Space new_current = c->get_right();
    return new_current;
    //cout<<"hop_to_right();"<<endl;
}

Space Space::hop_to_left(Space *c)
{
    Space new_current = c->get_left();
    return new_current;
    //cout<<"hop_to_left();"<<endl;
}

Space Space::hop_to_bottom(Space *c)
{
    Space new_current = c->get_bottom();
    return new_current;
    //cout<<"hop_to_bottom();"<<endl;
}


void Space::park_menu(Space *c)
{
    const int MIN=1;
    const int MAX=8;
    int choice;
    Space *current = c;
 
    
    do
    {
        cout<<"------------------------------------------------------------\n"
            <<"             "<<this->park_name<<endl
            <<"------------------------------------------------------------\n"
            <<"1 - Talk to "<<this->character<<endl
            <<"2 - Enjoy a treat\n"
            <<"3 - Go on a ride\n"
            <<"4 - Hop to " << this->top->park_name << endl
            <<"5 - Hop to " << this->right->park_name<< endl
            <<"6 - Hop to " << this->left->park_name<< endl
            <<"7 - Hop to " << this->bottom->park_name << endl
            <<"8 - Go back to the room and nap. (Ends this game)\n"
            <<"Enter your choice:\t";
        
            choice = string_to_num();
            while(choice<MIN||choice>MAX)  
            {
                cout<<"Invalid choice: \t";
                choice=string_to_num(); 
                vfy_range(choice, MIN, MAX); 
            }  
        
            if(choice==1)
            {
                this->talk_to_character();
            }
        
            else if(choice==2)
            {
                enjoy_a_treat();
            }
        
            else if(choice==3)
            {
                go_on_a_ride();
            }
        
            else if(choice==4)
            {
//                Space *current_ptr = &current;
//                cout<<"before change current ="<<current<<endl;
                *current = hop_to_top(current);
//                cout<<"after change current ="<<current<<endl;
            }
        
            else if(choice==5)
            {
                *current = hop_to_right(current);
//                current = hop_to_right(current);
            }
            
            else if(choice==6)
            {
                *current = hop_to_left(current);
//                current = hop_to_left(current);
            }
            
            else if(choice==7)
            {
                *current = hop_to_bottom(current);
//                current = hop_to_bottom(current);
            }
            
            else
            {
                cout<<"Enjoy your nap, see you later.";
            }
            
    }while(choice!=8);    
}

Space Space::get_top()
{
    return *top;
}

Space Space::get_right()
{
    return *right;
}

Space Space::get_left()
{
    return *left;
}

Space Space::get_bottom()
{
    return *bottom;
}




