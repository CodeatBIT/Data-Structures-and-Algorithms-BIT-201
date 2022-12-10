# Dynamic Memory Allocation

    calloc() and malloc() are used to allocate memory dynamically.

# To allocate memory, using malloc().

    int *ptr = (int *)malloc(5 * sizeof(int));

# To initialize memory, using calloc().

    int *ptr = (int *)calloc(5, sizeof(int));

# To reallocate memory, use realloc().

    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr = realloc(ptr, 10 * sizeof(int));

# To free memory, use free().

    int *ptr = (int *)malloc(5 * sizeof(int));
    free(ptr);
