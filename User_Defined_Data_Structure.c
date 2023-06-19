# include <stdio.h>

// Here, we are defining new data-structure...

typedef struct
{
    int index;
    char name;
}
new;

typedef char *string;

int main(void)
{
    new tup[2];
    string p = "Pratham";
    tup[0].index = 0;
    tup[0].name = 'P';

    tup[1].index = 1;
    tup[1].name = 'T';

    printf("\n%c %c\n", tup[0].name,tup[1].name);  
    printf("%s\n",p);

    return 0;
}