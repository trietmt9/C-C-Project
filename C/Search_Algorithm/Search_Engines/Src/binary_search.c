#include "binary_search.h"
uint8_t binary_search(uint8_t array[], uint8_t target)
{
    uint8_t mid;
    uint8_t low = 0; 
    uint8_t high = MAX_VALUE - 1;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == array[mid]) return mid; 

        else if( target > array[mid]) low = mid + 1;

        else high = mid - 1;
    }
    return 255;
}