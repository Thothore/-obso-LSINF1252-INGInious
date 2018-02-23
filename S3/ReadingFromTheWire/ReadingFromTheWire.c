/*
 * @return: 1 if the modem received a byte containing 42
 *         else 0, -1 if an error has happened.
 */
int has_42()
{
     void *buf = malloc(256);
     if (buf == NULL)
     {
         return -1;
     }
     int i, j;
     modem_read(buf, &j);
     for (i = 0; i < j; i++)
     {
         if (*((char *) buf+i) == 42)
         {
             free(buf);
             return 1;
         }
     }
     free(buf);
     return EXIT_SUCCESS;
}
