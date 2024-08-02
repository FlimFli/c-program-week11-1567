#include <stdio.h>
int addSum(int a, int b);
int add()
{
    int n1, n2;
    printf("Please Enter n1:");
    scanf("%d", &n1);
    printf("Please Enter n2:");
    scanf("%d", &n2);
    addSum(n1, n2);
    return 0;
}
int addSum(int a, int b)
{
    int add = a + b;
    printf("add:%d + %d = %d", a, b, add);
    return 0;
}