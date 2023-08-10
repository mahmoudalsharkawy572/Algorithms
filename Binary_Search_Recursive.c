#include <stdio.h>
#include <stdlib.h>

int binarySearch(int nums[], int low, int high, int target);

int main()
{
    int nums[] = {1, 4, 8, 15, 20, 22, 30, 80};
    int target = 0;
    while (1)
    {
        printf("enter element you want to search for : ");
        scanf("%d", &target);
        int n = sizeof(nums) / sizeof(nums[0]);
        int low = 0, high = n - 1;
        int index = binarySearch(nums, low, high, target);
        if (index != -1)
        {
            printf("Element found at index %d\n", index);
            printf("------------------------------------------\n");
        }
        else
        {
            printf("Element not found in the array\n");
            printf("------------------------------------------\n");
        }
    }
    return 0;
}

int binarySearch(int nums[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (target == nums[mid])
    {
        return mid;
    }
    else if (target < nums[mid])
    {
        return binarySearch(nums, low, mid - 1, target);
    }
    else
    {
        return binarySearch(nums, mid + 1, high, target);
    }
}
