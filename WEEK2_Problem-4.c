/* Write a C program to find the largest and smallest element in an array.*/
#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    printf("Enter size of the array: \n ");
    scanf("%d", &size);
    printf("%d \n", size);
    
    printf("Enter elements in the array: \n ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Code written by Sai Kiranman Singh
