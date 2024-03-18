#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t sum = 0, input[100], avg = 0, elements;
    //insert elements 
    printf("Insert elements: ");
    scanf("%d", &elements);
    //add sum
    for (uint8_t i = 0; i < elements; i++)
    {
        printf("Insert number you want to add: ");
        scanf("%d", &input[i]);
        sum += input[i];
    }

    avg = sum / elements;
    printf("Average is: %d", avg);
    return 0;

}