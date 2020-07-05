#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    printf("inplace_swap start : *x: %d, *y: %d\n", *x, *y);
    *y = *x ^ *y;
    printf("inplace_swap: *x: %d, *y: %d\n", *x, *y);
    *x = *x ^ *y;
    printf("inplace_swap: *x: %d, *y: %d\n", *x, *y);
    *y = *x ^ *y;
    printf("inplace_swap end: *x: %d, *y: %d\n", *x, *y);
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int main(int argc, char const *argv[])
{
    int a[3] = {0, 1, 2};
    reverse_array(a, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
