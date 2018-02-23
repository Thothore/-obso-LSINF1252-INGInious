int strcasecmp(const char *s1, const char *s2)
{
     int c = 0;
     char s11[strlen(s1)];
     char s22[strlen(s2)];
     while (s1[c] != 0)
     {
         char t = s1[c];
         if(t >= 65 && t <= 90)
         {
             s11[c] = t + 32;
         }
         else
         {
             s11[c] = t;
         }
         c++;
     }
     s11[c] = '\0';
     int d = 0;
     while (s2[d] != 0)
     {
         char r = s2[d];
         if (r >= 65 && r <= 90)
         {
             s22[d] = r + 32;
         }
         else
         {
             s22[d] = r;
         }
         d++;
     }
     s22[d] = '\0';
     int a;
     for (a = 0; s11[a] != 0; a++)
     {
         if (s11[a] != s22[a])
         {
             return s11[a] - s22[a];
         }
     }
     return EXIT_SUCCESS;
}
