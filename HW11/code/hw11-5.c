#include <stdio.h>

// Pass by value function to find maximum height
int findMaxHeight(int height[], int size)
{
    int max = height[0];
    for (int i = 1; i < size; i++)
    {
        if (height[i] > max)
        {
            max = height[i];
        }
    }
    return max;
}

// Pass by reference function to find maximum age
void findMaxAge(int age[], int size, int *maxAge)
{
    *maxAge = age[0];
    for (int i = 1; i < size; i++)
    {
        if (age[i] > *maxAge)
        {
            *maxAge = age[i];
        }
    }
}

int main()
{
    int Height[10] = {159, 168, 191, 188, 154, 152, 167, 165, 178, 177};
    int Age[10] = {18, 19, 18, 17, 16, 18, 17, 18, 18, 18};
    int maxAge;

    // Call pass by value function for Height
    int maxHeight = findMaxHeight(Height, 10);

    // Call pass by reference function for Age
    findMaxAge(Age, 10, &maxAge);

    // Print results
    printf("Max Height = %d\n", maxHeight);
    printf("Max Age = %d\n", maxAge);

    return 0;
}
