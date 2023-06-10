# include <stdio.h>

// Here, we are defining new data-structure...

typedef struct
{
    int index;
    char name;
}
new;


int main(void)
{
    new tup[2];

    tup[0].index = 0;
    tup[0].name = 'P';

    tup[1].index = 1;
    tup[1].name = 'T';

    printf("%c %c", tup[0].name,tup[1].name);  
}