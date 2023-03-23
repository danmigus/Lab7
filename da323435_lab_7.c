#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void bubbleSort(int *array, int size)
{
    int swaps = 0;
    int temp;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swaps++;
            }
            
        }
        printf("Iteration #%d: %d swaps\n", i+1, swaps);
            
        swaps = 0;

    }
}

int main(void){

    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(array) / sizeof(array[0]);

    printf("\n=========================================================\n");
    printf("Unsorted Array: ");
    printArray(array, size);
    printf("\n=========================================================\n\n");

    bubbleSort(array, size);

    printf("\n=========================================================\n");
    printf("Sorted Array using Bubble Sort: ");
    printArray(array, size);
    printf("\n=========================================================\n\n");

    return 0;
}
