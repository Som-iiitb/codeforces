#include <stdio.h>
#include <stdlib.h>

static void func(unsigned x)
{
    if (x == 0){
        return;
    }

    printf("Hello World inside func\n");

    static int stat = 8;
    unsigned int x2 = 6;
    unsigned *temp = malloc(2 * sizeof(size_t));

    *(temp) = x2;
    *(temp + 1) = x2 + 1;

    func(stat--);

    printf("\na(temp)=%p   a(temp+1)=%p  a(stat)=%p  a(x)=%p  a(x2)=%p  a(func)=%p\n",
           temp, (temp + 1), &stat, &x, &x2, &func);

    printf("\nsizeof(x)=%lu\t  address(x)=%p\n", sizeof(x), &x);
}

int main(int argc, char **argv)
{
    printf("\n\n\nHello World inside main\n");

    static int stat = 8;
    unsigned int x = 6;
    unsigned *temp = malloc(2 * sizeof(size_t));

    *(temp) = x;
    *(temp + 1) = x + 1;

    func(*temp);

    printf("\na(temp)=%p  a(temp+1)=%p  a(stat)=%p  a(x)=%p  a(main)=%p  a(func)=%p\n",
           temp, (temp + 1), &stat, &x, &main, &func);

    return 0;
}
