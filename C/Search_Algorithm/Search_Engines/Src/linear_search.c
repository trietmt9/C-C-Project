#include "linear_search.h"
uint8_t linear_search(uint8_t array[], uint8_t target)
{
    for(uint8_t i = 0; i <= MAX_VALUE - 1; i++)
    {
        if(array[i] == target) return i;
    }
    return 225;
}