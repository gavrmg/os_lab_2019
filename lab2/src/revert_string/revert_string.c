#include "revert_string.h"
#include "string.h"
void RevertString(char *str)
{
    int length, c;
    char *begin, *end, temp;
    length = strlen(str);
    begin = str;
    end = str + length - 1;

    
    for (c = 0; c < length/2; c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }

}

