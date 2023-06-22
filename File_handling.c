# include <stdio.h>

typedef char *string;
int main()
{
    FILE *new = fopen("new_txt.txt", "r");
    char text[100];
    fread(text, 1, 100, new);
    printf("%s\n",text);
    fclose(new);
    return 0;
}
