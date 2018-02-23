/* tab_find

@tab : an array of int
@len : the number of int in tab
@elem : the elem looked for
@return : return the index at which elem is found, else returns -1 if not found. */
int tab_find(int tab[], int len, int elem)
{
     int temp = -1;
     for (int i = 0; i < len && temp == -1; i++)
     {
         if (tab[i] == elem)
         {
             temp = i;
         }
     }
     return temp;
}
