#include <stdio.h>

void reverse(char *namePtr)
{
    int length = 0;
    while (namePtr[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        char temp = namePtr[i];
        namePtr[i] = namePtr[length - 1 - i];
        namePtr[length - 1 - i] = temp;
    }
}

int main()
{
    char name[100];
    char *namePtr = name;

    scanf("%s", name);

    reverse(namePtr);
    printf("%s\n", name);
}
