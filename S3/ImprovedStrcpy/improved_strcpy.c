/*
* Creates a buffer that has the same size as src, and copies the content of src to this buffer.
*
* @src: string to be copied
* @return: return pointer. if src == NULL or in case of error, return NULL
*
* Remember that strings are terminated with '\0' and that strlen("abc") returns 3 even if 4 bytes are required to store this string.
*/
char *buf_strcpy(const char *src) 
{
  if(src == NULL)
  {
      return NULL;
  }
  int i;
  int len = strlen(src);
  char *dest = (char *) malloc((len + 1) * sizeof(char));
  if(dest == NULL)
  {
      return NULL;
  }
  for(i = 0 ; i <= len ; i++)
  {
      *(dest + i) = *(src + i);
  }
  return dest;
}
