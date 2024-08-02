#include <stdio.h>
int mulFunc(int a, int b);
int mul()
{
    int n1, n2;
    printf("Please Enter n1:");
    scanf("%d", &n1);
    printf("Please Enter n2:");
    scanf("%d", &n2);
    mulFunc(n1, n2);
    return 0;
}

int mulFunc(int a, int b)
{
    int mul = a * b;
    printf("mul:%d * %d = %d", a, b, mul);
    return 0;
}