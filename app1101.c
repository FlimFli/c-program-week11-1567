
/*ระบบคณิตศาสตร์ ดูเต็มได้ที่ Class room*/

                        /*บวกเลขง่่ายๆ*/
/*#include<stdio.h>
void main(){
    int a = 10;
    int b = 5;
    int add = a + b;
    printf("add:%d+%d = %d", a, b, add);
}*/




/*`------------- การบวกกันแบบข้าม_ -----------------*/
/*#include <stdio.h>
int add(int a, int b);
void main()
{
    add(10,5);
}
int add(int a, int b){
    //int a = 10;
    //int b = 5;
    int add = a + b;
    printf("add:%d+%d = %d", a, b, add);
    return 0;
}*/



// บวกแบบเราพิมกำหนดเองเลย
/*#include <stdio.h>
int add(int a, int b);
void main()
{
    int n1, n2;
    printf("Please Enter n1:");
    scanf("%d", &n1);
    printf("Please Enter n2:");
    scanf("%d", &n2);
    add(n1, n2);
}
int add(int a, int b)
{
    // int a = 10;
    // int b = 5;
    int add = a + b;
    printf("add:%d+%d = %d", a, b, add);
    return 0;
}*/




/*------------- การทำแบบแยกหน้า กับ add.c ----------------*/
#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
int addCall();
int subCall();
int mulCall();
void main()
{
    mulCall();
    // subCall();
    // addCall();
}

int mulCall()
{
    mul();
    return 0;
}

int subCall(){
    sub();
    return 0;
}

int addCall(){
    add();
    return 0;
}