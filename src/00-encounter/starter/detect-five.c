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

bool is5(int x)
{   
    bool result;
    switch (x)
    {
    case 1:
        printf("It's one!\n");
        result = false;
        break;
    case 2:
        printf("It's two!\n");
        result = false;
        break;
    case 3:
        printf("It's three!\n");
        result = false;
        break;
    case 4:
        printf("It's four!\n");
        result = false;
        break;
    case 5:
        printf("It's five!\n");
        result = true;
        break;
    default:
        printf("It's something else entirely!\n");
        result = false;
    }
    return result;
}