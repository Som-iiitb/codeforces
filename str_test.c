#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 128

int main()
{
    char *string;
    char **words;
    int a, windex;

    /* allocate buffers */
    string = (char *)malloc(sizeof(char) * MAX);
    words = (char **)malloc(sizeof(void *) * MAX / 2);
    if (string == NULL || words == NULL)
    {
        perror("Unable to allocate memory\n");
        exit(1);
    }

    /* fetch the text */
    printf("Type some text: ");
    fgets(string, MAX, stdin);
    /* bail on no input */
    if (*(string + 0) == '\n')
        return (0);

    /* parse words in the text */
    windex = 0;
    while ((*(words + windex) = strsep(&string, " ")) != NULL)
        windex++;

    /* output results */
    for (a = windex - 1; a >= 0; a--)
    {
        printf("%s ", *(words + a));
    }
    putchar('\n');

    return (0);
}
