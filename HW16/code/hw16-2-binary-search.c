#include <stdio.h>

int BinarySearch(int data[], int n, int find);

int main()
{
    int RealData[6] = {1, 2, 4, 5, 8, 9};
    printf("Found in %d\n", BinarySearch(RealData, 6, 8));
    return 0;
}

int BinarySearch(int data[], int n, int find)
{
    int left = 0;
    int right = n - 1;
    int Output = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (data[mid] == find)
        {
            Output = mid;
            break;
        }
        else if (data[mid] < find)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return Output;
}