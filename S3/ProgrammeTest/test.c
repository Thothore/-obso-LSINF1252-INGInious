#include <string.h>

int main (int argc, const char **argv)
{
    int int1 = atoi(argv[1]);
    int int2 = atoi(argv[3]);
    if (!strcmp("-eq", argv[2]))
    {
        if (int1 == int2)
        {
            return 0;
        }
        return 1;
    }
    else if (!strcmp("-ge", argv[2]))
    {
        if (int1 >= int2)
        {
            return 0;
        }
        return 1;
    }
    else if (!strcmp("-gt", argv[2]))
    {
        if (int1 > int2)
        {
            return 0;
        }
        return 1;
    }
    else if (!strcmp("-le", argv[2]))
    {
        if (int1 <= int2)
        {
            return 0;
        }
        return 1;
    }
    else if (!strcmp("-lt", argv[2]))
    {
        if (int1 < int2)
        {
            return 0;
        }
        return 1;
    }
    else if (!strcmp("-ne", argv[2]))
    {
        if (int1 == int2)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        return 1;
    }
}
