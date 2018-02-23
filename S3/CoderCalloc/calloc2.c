#include <stdlib.h>
#include <string.h>

void *calloc2(size_t nmemb, size_t size)
{
     void *p;

     p = malloc (nmemb * size);
     if (p == 0)
     return (p);

     bzero (p, nmemb * size);
     return (p);
}
