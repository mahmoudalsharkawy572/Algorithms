#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;
    while(1)
    {
        printf("\nEnter size of the array : ");
        scanf("%d", &size);
        printf("Enter elements in array : \n");
        for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter the element position to delete : ");
        scanf("%d", &pos);
        if(pos < 0 || pos > size)
        {
            printf("Invalid position! Please enter position between 1 to %d", size);
            printf("\n----------------------------------------------\n");
        }
        else
        {
            for(i=pos-1; i<size-1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            printf("\nElements of array after delete are : ");
            for(i=0; i<size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n----------------------------------------------\n");
        }
    }
    return 0;
}
