#include<stdio.h>
int subDelete(int a, int b);
int sub()
{
    int n1, n2;
    printf("Please Enter n1:");
    scanf("%d", &n1);
    printf("Please Enter n2:");
    scanf("%d", &n2);
    subDelete(n1, n2);
    return 0;
}

int subDelete(int a, int b){
    int sub = a - b;
    printf("Sub:%d - %d = %d", a, b, sub);
    return 0;
}