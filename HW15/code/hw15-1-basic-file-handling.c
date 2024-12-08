#include <stdio.h>
FILE *file;

int main()
{
    char text[100];

    file = fopen("../util/a.txt", "r");
    fgets(text, sizeof(text), file);
    printf("Text in file = %s\n", text);
}