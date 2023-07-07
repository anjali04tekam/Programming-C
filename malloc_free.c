# include <stdio.h>
# include <stdlib.h>

int main()
{
    // malloc function
    // t = malloc(6); // this will assign 6 bites of free memory to variable t
    // but be carefull while using these functions as we have to manage full memory.

    // free function
    // free(t); // this will free the memory allocated to variable t...
    // This function will free the allocated memory.

    // can use 'valgrind' to check if there are any memory errors.

    // Garbage values: if you just allocate memory without changing its value, then 
    // the memory itself already have some values in it called garbage values which were 
    // the values used by some other program earlier...

    // realloc function
    // reallocate the memory and copy paste previous data into new chunck of memory
    // takes two arguments
    // int *t2 = realloc(t, 40 * sizeof(int)); can grow or compress array...

    int *list = malloc(3 * sizeof(int));
    if ( list == NULL ) // Just to check if computer runs out of memory...
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // ...

}