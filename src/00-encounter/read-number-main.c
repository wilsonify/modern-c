#include <stdio.h>
#include "read-number.h"

int main()
{
    int number;
    int number_of_things_entered;
    printf("Please enter a number: ");
    number_of_things_entered = scanf("%d", &number);
    

    if (number_of_things_entered==0) { printf("You entered %d things\n", number_of_things_entered); }
    else if (number_of_things_entered==1)  { read_number(number); }
    else { printf("You entered %d things\n", number_of_things_entered); }
    return number;


}