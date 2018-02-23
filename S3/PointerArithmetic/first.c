int first(void *ptr)
{
     return *((int *) (((char *) ptr) + 12));
}
