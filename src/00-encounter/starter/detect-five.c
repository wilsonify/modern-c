#include "detect-five.h"

bool is4(int x)
{

    if (x == 4)
    {
        printf("Yup, it's four!\n");
        return true;
    }
    else if (x == 5)
    {
        printf("Nope, it's five!\n");
        return false;
    }
    else
    {
        printf("It's something else entirely.\n");
        return false;
    }
}