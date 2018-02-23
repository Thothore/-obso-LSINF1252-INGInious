int third(void *ptr)
{
     return *((int *) (((char *) ptr) + 45));
}
