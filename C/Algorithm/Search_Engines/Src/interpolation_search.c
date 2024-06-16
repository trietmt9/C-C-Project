#include "interpolation_search.h"
uint8_t interpolation_search(uint8_t array[], uint8_t target)
{
    uint8_t pos = 0;
    uint8_t low = 0;
    uint8_t high = MAX_VALUE - 1;
    while(low <= high && target >= array[low] && target <= array[high])
    {
        pos = low + ((target -array[low])*(high-low)/(array[high]-array[low]));

        if(target > array[pos]) low = pos + 1;

        else if(target < array[pos]) high = pos - 1; 

        else if(target == array[pos]) return pos; 
    }
    return 255; 
}