#include "jump_search.h"
uint8_t jump_search(uint8_t array[], uint8_t target)
{
    uint8_t jump_step = sqrt(MAX_VALUE);
    uint8_t prev = 0; 
    for(uint8_t pos = 0; pos <= MAX_VALUE - 1; pos+=jump_step) 
    {
        if(array[pos] == target) return pos;

        else if(array[pos] < target) prev = array[pos];
        
        else break;
    }
    for(uint8_t pos = prev; pos <= MAX_VALUE -1; pos++)
    {
        if(array[pos] == target) return pos;
    }
    return 255;
}