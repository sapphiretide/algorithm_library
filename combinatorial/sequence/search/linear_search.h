#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

typedef int32_t(*Cmp)(void *, void *, int32_t *);

/******************************************************************************
 * Function Name: Linear Search
 *
 * Description: 
 * Searches array of variable type for the element specified by 'val'.
 *
 * Parameters:
 * arr  (IN) - Array to be searched
 * size (IN) - Size of the data type held in array
 * len  (IN) - Length of array
 * val  (IN) - Value to be searched for
 * cmp  (IN) - Comparator function to be used to determine a match
 *
 * Returns:
 * Possitive - Index of found value
 * Negative  - Value not found
 *
 *****************************************************************************/
int32_t linear_search(void* arr, size_t size, size_t len, void* val, Cmp cmp);


#endif /* LINEAR_SEARCH_H */