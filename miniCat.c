#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("%s %s %s", "Error: could not open file", argv[1], "\n");
        return 1;
    } else {
    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    // close the file
    fclose(fp);
    }
    return 0;
}
