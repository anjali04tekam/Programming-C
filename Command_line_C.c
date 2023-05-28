# include <stdio.h>


int main(int argc, char argv[])
{
    if (argc==1)
    {
        printf("hello,\n");
    }
    else
    {
        printf("hello, %c\n", argv[1]);
    }
}