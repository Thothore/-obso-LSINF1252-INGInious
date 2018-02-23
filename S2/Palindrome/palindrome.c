#include <string.h>
/*
* @return: returns true (1) if str is a palindrome, -1 if str is NULL, otherwise false (0).
*/
int pal(char *str)
{
     if (str == NULL)
     {
         return -1;
     }
     else
     {
          int l = strlen(str);
          int j;
          int s = 0;
          for (j = 0; j < l; j++)
          {
               if (str[j] == ' ')
               {
                  s++;
               }
          }
          int k;
          char str2[l-s];
          int kk = 0;
          for (k = 0; k < l; k++)
          {
               if (str[k] != ' ')
               {
                  str2[kk] = str[k];
                  kk++;
               }
          }
          int i;
          for (i = 0; i < kk; i++)
          {
               if (str2[i] != str2[kk-i-1])
               {
                    return 0;
               }
          }
          return 1;
     }
}
