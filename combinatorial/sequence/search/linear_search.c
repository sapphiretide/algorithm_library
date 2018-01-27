#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <errno.h>

#include "linear_search.h"

int32_t linear_search(void* arr,
                      size_t size,  
                      size_t len, 
                      void* val, 
                      Compare cmp)
{
    int32_t i = -1;
    int32_t compare = -1;
    bool found = false;
    bool okay = false;
    char* arr_ptr = (char*)arr;

    okay = (arr != NULL);
    okay = (okay && (val != NULL));
    okay = (okay && (cmp != NULL));
    okay = (okay && (index != NULL));
    i = (okay ? 0 : -1);

    if (okay)
    {
        for (i = 0; i < (int32_t)len; i++)
        {
            cmp((void *)arr_ptr, val, &compare);

            if (compare == 0)
            {
                found = true;
                break;
            }
            arr_ptr += size;
        }

        i = (found ? i : -1);
    }
    return i;
}

