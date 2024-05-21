#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define MAX_VALUE                                   10       
uint8_t Index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};

uint8_t binary_search(uint8_t array[], uint8_t target);
uint8_t linear_search(uint8_t array[], uint8_t target);
uint8_t interpolation_search(uint8_t array[], uint8_t target);
uint8_t jump_search(uint8_t array[], uint8_t target);
int main(int argc, char *argv[])
{   
    uint8_t target = 5;
    uint8_t result=0;
    result = jump_search(Index, 5);
    if(result != 255) printf("%d is in index[%d]\n", target, result);
    else printf("%d is not in index\n", target);
    return 0;
}
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

uint8_t linear_search(uint8_t array[], uint8_t target)
{
    for(uint8_t i = 0; i <= MAX_VALUE - 1; i++)
    {
        if(array[i] == target) return i;
    }
    return 225;
}

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