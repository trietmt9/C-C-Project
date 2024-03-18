#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t array[10];
    //type input array 
    for (int i = 0; i < 10; ++i)
    {
        printf("Insert number: ", array[i]);
        scanf("%d", &array[i]);
    }
    // print output array 
    printf("The numbers in array are: ");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", array[i]);
    }
    return 0;
}