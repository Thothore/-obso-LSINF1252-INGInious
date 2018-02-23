#include <stdio.h>

int absval(int i)
{
     if (i >= 0)
     {
         return i;
     }
     return -i;
}

int main(int argc, const char** argv)
{
     int i = -19;
     printf("Valeur absolue de %d : %d.\n",i, absval(i));
}
