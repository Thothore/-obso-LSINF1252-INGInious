char *strcat(char *destination, const char *source)
{
     size_t dest_len = strlen(destination);
     size_t i;
     for (i = 0; source[i] != '\0'; i++)
     {
         destination[dest_len + i] = source[i];
     }
     destination[dest_len + i] = '\0';

     return destination;
}
