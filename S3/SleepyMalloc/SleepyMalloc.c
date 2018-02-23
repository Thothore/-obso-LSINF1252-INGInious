void *sleepy_malloc(size_t s)
{
     int counter;
     for (counter = 0; counter < 10; counter++)
     {
         void *p = malloc(s);
         if (p != NULL)
         {
             return p;
         }
         sleep(5);
     }
     return NULL;
}
