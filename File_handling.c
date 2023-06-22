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
    // If we want to read and write at the same time them we need to set two pointers.
    // One for reading and other for appending/writing.
    /*
        We have :
            fgetc() to get a char
            fputc() to put a char
            fgets() s for string
            fputs()
            More important:
                fread(buffer, size, quantity, file_pointer) // Goes from pointer to buffer
                fwrite(buffer, size, quantity, file_pointer) // Goes from buffer to pointer
                fprintf()
    */
}
