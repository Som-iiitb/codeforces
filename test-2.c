#include <stdio.h>
#include <stdlib.h>

static void func (unsigned x) {
    printf("\n%lu\n", sizeof(x));
}

int main(int argc, char **argv)
{
    printf("Hello World\n");
    
    static int stat = 8;
    unsigned int x = 6;
    unsigned *temp = malloc(2*sizeof(size_t));
    
    *(temp) = x;
    *(temp+1) = x+1;
    
    func(*temp);
    
    printf("\n%p\t \t %p \t%p \t %p\t %p \t %p\n", temp, (temp+1), &stat, &x, &main, &func);
    
    return 0;
}

