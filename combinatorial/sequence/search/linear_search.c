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
                      Compare cmp,
                      bool* match,
                      size_t* index)
{
    int32_t status = -1;

    size_t i = 0U;
    int32_t compare = -1;
    bool found = false;
    bool okay = false;
    char* arr_ptr = (char*)arr;


    okay = (arr != NULL);
    okay = (okay && (val != NULL));
    okay = (okay && (cmp != NULL));
    okay = (okay && (index != NULL));
    status = (okay ? 0 : -1);

    if (okay)
    {
        for (i = 0U; i < len; i++)
        {
            cmp((void *)arr_ptr, val, &compare);
            
            if (compare == 0)
            {
                found = true;
                break;
            }
            arr_ptr++;
        }
        *match = found;
        *index = i;
    }

    return status;
}

