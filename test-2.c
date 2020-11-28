#include <stdio.h>
#include <stdlib.h>
int global_x = 3;

static unsigned func(unsigned x)
{
    printf("Hello World inside func\n");

    unsigned temp_final = 0;
    static int stat = 8;
    unsigned int x2 = 6;
    unsigned *temp = malloc(2 * sizeof(size_t));

    *(temp) = x2;
    *(temp + 1) = x2 + 1;

    printf("\na(temp)=%p   a(temp+1)=%p  a(stat)=%p  a(x)=%p  a(x2)=%p  a(func)=%p\n",
           temp, (temp + 1), &stat, &x, &x2, &func);

    if (x == 0)
    {
        return 0;
    }
    else
    {
        x = x - 1;
        temp_final = x + func(x);
        printf("\ntemp_final=%d and addr = %p", temp_final, &temp_final);
        return temp_final; 
    }
}

int main(int argc, char **argv)
{
    printf("\n\n\nHello World inside main\n");

    static int stat = 8;
    unsigned int x = 2;
    unsigned *temp = malloc(2 * sizeof(size_t));

    *(temp) = x;
    *(temp + 1) = x + 1;

    printf("\na(temp)=%p  a(temp+1)=%p  a(stat)=%p  a(x)=%p  a(main)=%p  a(func)=%p a(global_x)=%p a(printf)=%p\n",
           temp, (temp + 1), &stat, &x, &main, &func, &global_x, &printf);

    unsigned final = func(*temp);

    printf("\nfinal=%d\n", final);
    return 0;
}
