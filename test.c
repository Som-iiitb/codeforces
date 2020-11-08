#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    printf("%p %p\n", (int *)a, (int *)(&a+1));

    char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
    char **cp[] = {c+3, c+2, c+1, c};
    char ***cpp = cp;

    printf("%s \n", **++cpp);
    printf("%s \n", *--*++cpp+3);
    printf("%s \n", *cpp[-2]+3);
    printf("%s \n", cpp[-1][-1]+1);

    int x;
    int *p = &x;
    int *p1 = p + 1;
    int (*exmpl)[5][5];
    printf("sizeof(*p)=%lu sizeof(p)=%lu sizeof(exmpl)=%lu\n",  sizeof(*p), sizeof(p),sizeof(*exmpl));
    printf("p= %p, p+1 = %p, ((p+1)-p)= %ld\n",p, p+1,((char *)(p+1)-(char *)p));
    printf("(&x + 1)= %p, (&x) = %p, (&x + 1) - (&x)= %ld\n",(&x + 1),(&x), (&x + 1) - (&x));
    printf("(&x + 1)= %p, (&x) = %p, (&x + 1) - (&x)= %ld\n",(char *)(&x + 1),(&x),((void *)(&x + 1) - (void *)(&x)));
    printf("(&x + 1)= %p, (&x) = %p, (&x + 1) - (&x)= %ld\n",(char *)(&x + 1),(char *)(&x), (char *)(&x + 1) - (char *)(&x));
    return 0;
}