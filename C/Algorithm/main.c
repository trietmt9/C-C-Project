#include <stdio.h>
#include <stdint.h>

#define JUMP 
#ifdef LINEAR

#include "linear_search.h"
uint8_t Index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};


int main(int argc, char *argv[])
{   
    uint8_t target = 5;
    uint8_t result=0;
    result = linear_search(Index, 5);
    if(result != 255) printf("%d is in index[%d]\n", target, result);
    else printf("%d is not in index\n", target);
    return 0;
}
#endif

#ifdef BINARY

#include "binary_search.h"
uint8_t Index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};


int main(int argc, char *argv[])
{   
    uint8_t target = 5;
    uint8_t result=0;
    result = binary_search(Index, 5);
    if(result != 255) printf("%d is in index[%d]\n", target, result);
    else printf("%d is not in index\n", target);
    return 0;
}
#endif

#ifdef INTERPOLATION

#include "interpolation_search.h"
uint8_t Index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};


int main(int argc, char *argv[])
{   
    uint8_t target = 5;
    uint8_t result=0;
    result = interpolation_search(Index, 5);
    if(result != 255) printf("%d is in index[%d]\n", target, result);
    else printf("%d is not in index\n", target);
    return 0;
}
#endif

#ifdef JUMP

#include "jump_search.h"
uint8_t Index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};


int main(int argc, char *argv[])
{   
    uint8_t target = 5;
    uint8_t result=0;
    result = jump_search(Index, 5);
    if(result != 255) printf("%d is in index[%d]\n", target, result);
    else printf("%d is not in index\n", target);
    return 0;
}
#endif
