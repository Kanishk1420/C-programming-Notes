#include <stdio.h>
/*A pointer is a variable which stores the address of another variable.*/
// * value at address of ptr
// & address
int main()
{
    int a = 24;
    int *pt = &a;
    int _a = *pt;

    // q1
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("%d\n", _a);
    printf("%d\n", &_a);
    printf("%d\n", *pt);
    printf("%d\n", &pt);
    printf("%d\n", a);
    printf("%u\n", _a);
    printf("%u\n", &_a);
    printf("%u\n", *pt);
    printf("%u\n", &pt);
    printf("%u\n", a);
    printf("%p\n", _a);
    printf("%p\n", &_a);
    printf("%p\n", *pt);
    printf("%p\n", &pt);
    printf("%p\n", a);

    //
    printf("%d\n", a);
    printf("%d\n", *pt);
    printf("%d\n", *(&a));

    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);
    printf("x=%p\n", x);
    printf("*ptr=%p\n", *ptr);
    // %p --> hexadecimal address
    // &u --> unsigned integer

    // pointer to pointer
    //  a variable that stores the memory address of another pointer
    //  &age = 2010 --> ptr= 2013 stores 2010 --> pptr=2012 stores 2013
    int **ptrr;
    int a = 24;
    int b = 36;
    int temp;
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("a is %d\n", a);
    printf("b is %d\n", b);
}

int main()
{
    int n = 4;
    printf("%p\n", &n);
    printaddress(n); // output is different
    return 0;
}
void printaddress(int n)
{ // call by value is going because it will make another copy of same value but in different address
    printf("%p\n", &n);
}

int main()
{
    int n = 4;
    printf("%p\n", &n);
    printaddress(&n); // output is different
    return 0;
}
void printaddress(int *n)
{ // call by reference is going because it will copy of same value but in different address so we will get same address
    printf("%p\n", n);
}

// write a function to calculate the sum,product,& average of 2 numbers.print that average in main function.
void sum(int a, int b);
void product(int a, int b);
#include <stdio.h>
int main()
{
    int x = 23, y = 32;
    printf("Avg is %d\n", average(23, 32));
    sum(23, 32);
    product(23, 32);
}
void sum(int a, int b)
{
    int c = a + b;
    printf("Sum is %d\n", c);
}
void product(int a, int b)
{
    int p = a * b;
    printf("Product is %d\n", p);
}
int average(int a, int b)
{
    int v = a + b / 2;
}

// swap code by pointers
#include <stdio.h>
int swap(int *a, int *b);
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 6;
    int y = 4;
    swap(&x, &y);
    printf("Swapped values: x = %d, y = %d\n", x, y);
    return 0;
}
// pass the ptr value to function and check the address going to same or not?
#include <stdio.h>
int poi(int *ptr)
{
    printf("%u\n", ptr);
    printf("%u\n", *ptr);
    return 5;
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("%u\n", &i);
    poi(ptr);
}
// write a program to change the value of a variable to ten times of its current value.
#include <stdio.h>
int ten(int *a);
int ten(int *a)
{
    *a = *a * 10;
    return *a;
}
int main()
{
    int x = 45;
    printf("%d\n", x);
    ten(&x);
    printf("%d\n", x);
    return 0;
}
// print sum and average of two numbers and print the values of two programs in main function using pointers
#include <stdio.h>
int sum(int *a, int *b)
{
    int *c;
    *a = 34;
    *b = 45;
    *c = *a + *b;
    return *c;
}
int average(int *a, int *b)
{
    int *c;
    *a = 34;
    *b = 45;
    *c = *a + *b / 2;
    return *c;
}
int main()
{
    int x;
    int y;
    sum(&x, &y);
    printf("%d\n", average(&x, &y));
    printf("%d\n", x + y);
    return 0;
}
//print a program to print pointer to pointer and pass the value
#include<stdio.h>
int main(){
  int i = 45;
  int *j = &i;
  int **k = &j;
  printf("%d\n",**(&j));
}