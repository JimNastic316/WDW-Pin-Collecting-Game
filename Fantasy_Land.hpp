/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Header file for class Fantasy_Land
*****************************************************/ 
#ifndef FANTASY_LAND_HPP
#define FANTASY_LAND_HPP

class Fantasy_Land : public Space
{
private:

protected:

public:
    // Constructor
    Fantasy_Land();
    
    // Destructor
    ~Fantasy_Land();
    
    void enjoy_a_treat() override;
    
};
#endif