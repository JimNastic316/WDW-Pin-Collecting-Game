/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Header file for class Super_Awesome_Land
*****************************************************/ 
#ifndef SUPER_AWESOME_LAND
#define SUPER_AWESOME_LAND

class Super_Awesome_Land : public Space
{
private:

protected:

public:
    // Constructor
    Super_Awesome_Land();
    
    // Destructor
    ~Super_Awesome_Land();
    
    Space get_top();
    
    
    
};
#endif