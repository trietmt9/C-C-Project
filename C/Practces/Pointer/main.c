#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) 
{
    const int8_t number = 25; 
    
    printf ("Number before change: %d\n", number);
    int8_t *pnumber = &number; 
    *pnumber = 50; 
    printf ("Number after change: %d\n", number); 

}