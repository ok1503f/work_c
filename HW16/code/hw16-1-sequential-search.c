#include <stdio.h>

int main()
{
    int RealData[6] = {7, 4, 1, 8, 3, 2};
    printf("Found in %d\n", SequentialSearch(RealData, 6, 8));
    return 0;
}

int SequentialSearch(int data[], int n, int find)
{
    int Output = -1;
    for (int i = 0; i < n; i++)
    {
        if (data[i] == find)
        {
            return i; // Return the position (0-based index)
        }
    }
    return Output;
}