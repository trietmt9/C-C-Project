#include <stdio.h> 
#define MAX_VALUE                       10

int index[MAX_VALUE] = {0, 2, 5, 6, 9, 10, 11, 12, 13, 14};
int binary_search(int array[], int target)
{
    int mid;
    int low = 0; 
    int high = MAX_VALUE - 1;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == array[mid])
        {
            return mid; 
        }
        else if( target > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(void)
{
    int result;
    result = binary_search(index, 14);
    if(result != -1) 
    {
        printf("Is in index[%d]\n", result);
    }
    else printf("Is not in index\n");
}