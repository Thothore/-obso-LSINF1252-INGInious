#include <stdio.h>

int main (int argc, char **argv)
{
    int i;
    for (i = 1; i < argc; i = i + 2)
    {
        printf("%s", argv[i]);
        if (i < argc-2)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
