/****************************************************
Author: James Underwood  
Date: 12/5/2019
Description: Header file for class Tomorrow_Land
*****************************************************/ 
#ifndef TOMORROW_LAND_HPP
#define TOMORROW_LAND_HPP

class Tomorrow_Land : public Space
{
private:

protected:

public:
    // Constructor
    Tomorrow_Land();
    
    // Destructor
    ~Tomorrow_Land();
    
    
    void talk_to_character() override;
    
};
#endif