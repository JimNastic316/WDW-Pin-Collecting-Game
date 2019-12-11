/****************************************************
Author: James Underwood 
Date: 11/10/2019
Description: Implementation file for check_input.  
Ensures input is an integer value.
******************************************************/ 
#include "check_input.hpp"
#include <iostream> 
#include <string>
#include <algorithm>
#include <sstream>          
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stringstream;


// Function takes in a string, and converts it to int
// Does not check that it is within range, will need to add later
int string_to_num()
{
    string string_to_num;
    int converted_num;
    
    // Get input from user, 
    do
    {
        getline(cin, string_to_num);

        // remove spaces from string
        // found at http://www.cplusplus.com/forum/beginner/87967/
        string_to_num.erase(std::remove(string_to_num.begin(),
               string_to_num.end(), ' '), string_to_num.end());
 
        if(all_num(string_to_num)==false)
        {
            cout<<"Invalid input -"
                <<" non number detected"<<endl;
            cout<<"\nPlease enter numbers only\t";
        }
    
    } while(all_num(string_to_num)==false);        
    

//https://www.youtube.com/watch?v=LM6EDIKS5Pk    
// use stringstream to make an integer
//    int make_string_int(string_to_num);
    converted_num=make_string_int(string_to_num); 
    return converted_num;
}

// Function to check every character in a string
// If all are numeric, returns true
bool all_num(string string_to_num)
{
    bool this_is_num;
    int length = string_to_num.size();
    
    for(int i=0; i < length; i++)
    {
        if(isdigit(string_to_num[i]))
        {    
            this_is_num=true;
        }
        else
        {    
            return false;
        }        
    }
    return this_is_num;
}

// Takes a string and converts to integer
//https://www.youtube.com/watch?v=LM6EDIKS5Pk    
int make_string_int(string input_string)
{
    int now_is_num;
    stringstream sso;       // string stream object
    
    sso<<input_string;
    sso>>now_is_num;

    return now_is_num;
}
// Verifies that the 1st parameter is 
// between the 2nd and 3rd. If not, returns false.
// If true, returns the value of the number.
bool vfy_range(int number, int low, int high)
{

    if(number<low||number>high)
    {
        cout<<"Not in range"<<endl;
        number=0;
        return number;
    }
    else
    {
        return number;
    }

}
