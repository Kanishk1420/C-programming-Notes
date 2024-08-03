/* POINTERS*/
/*A pointer is a variable which stores the address of another variable.
J is a pointer if j points to I.
The address of (&) operator
The address of operator is used to obtain the address of a given variable
&i= 87994  (give the  address of that particular variable)
&j= 877998 (give the address of that particular variable)
the value of address operator is (*)
the value of address is used to obtain the value present at a given memory address. It is denoted by *
*(&i)=72     (to print the value of that variable from adress)
*(&j)=87994  (to print the value of that variable from adress)
j points to i? j is a pointer. and j kei andhar i ka adress hei.
it means that j holds the memory address of i. You would express this as j = &i;, where &i is the address of i.
j= &i; --> Store address of i in j.
int *j; declare a variable j of type int-pointer.
int*ch-ptr ----> Pointer to integer
char*ch-ptr ----> Pointer to character ex:-*/
#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of j is %u\n", j); // for address allocation its %u
    printf("The address of j is %u\n", &j);
    printf("The address of j is %u\n", *j);
    printf("The address of j is %u\n", *(&j));
    return 0;
}
/*Pointer to a pointer 
Just like j is pointing to i or storing the address of i, we can have another variable k which can further store the address of j. what will be the type of k.
int **k;
k=&j;
int       i            j         k
value  ||  72       ||87994    ||87998
address|| 87994     ||87998    ||88004
_________________________________________________________

TYPES OF CALL FUNCTION.
1. CALL BY VALUE
2. CALL BY REFERENCE
1. CALL BY VALUE---------Here the value of the arguments are passed to the function. Consider this example:
int c = sum(3,4);
*/
int average(int a, int b, int c);
int main()
{
    int a, b, c;
    a=b=c=6;
    printf("the value of average is %d\n",average(a,b,c));
    return 0;
}

int average(int a, int b, int c){
    int result;
    int d;
    d= a+b;
    result = (a + b + c)/3;
    return result;
}
    /*if average is defined as average(a,b,c) then the first original one will going to implement instead bottom one.
    this is called Call by Value.
    orginal copy==xerox 
    if xerox got destroyed then it will not effect original copy.
    2.CALL BY REFRENCE------------ Here the address of the variables is passed to the function as arguments.
    *- value leni ke liye
    & - address leni ke liye*/
void swap(int a, int b);
void wrong_swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("the value of x and y before swap is %d and %d\n", x, y);
    // wrong_swap(x,y); will not work due to call by value  
    wrong_swap(&x, &y); // will work due to call by value
    printf("the value of x and y is after swap %d and %d\n", x, y);
    return 0;
}
void swap(int a, int b){
int temp;
temp = a;
a = b;
b = temp;
}
void wrong_swap(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp; // swapping algo //
}
// <-----------------------PRACTICE SET-------------------------> 

// write a program to print the address of a variable. Use this address to get the value of this variable.
int main()
{
    int a = 8;
    int *p; // us address kei value kei liye //
    p = &a; // a ka address p kei andhar //
    printf("the value of variable a is %d\n", a);
    printf("the address of variable p is %u\n", p);
    printf("the value of variable a is %d\n", *p);
    return 0;
}
// write a program having variable i. print the address of i. Pass this variable to a function and print its address. Are these variables Same? why? //
void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    printf("the value of variable i is %d\n", i);
    printAdd(i);
    printf("the address of variable i is %u\n", &i); // inke address change honge bhale hei a and i same ho //
    return 0;                                       
     // call by reference mei address kei value pass hoti hei and //
     // call by value mei variable kei value pass hoti hei//
}
// write a program to change the value of a variable to 10 times of its current value. write a function and pass the value by refrence.
void print_Add(int b);
void print_add(int *b);

int main()
{
    int i = 10;

    printf("The value of variable i is %d\n", i);
    print_add(&i);
    printf("The value of variable after is %d\n", i);

    return 0;
}

void print_Add(int b)
{
    int c;
    c = b * 10;
    // If you want to use 'c' in some meaningful way, you need to return or print it.
    // For now, the calculation doesn't affect the main program.
}

void print_add(int *b)
{
    *b = *b * 10; //assigns the result back to the memory location pointed to by b, effectively changing the value of the original variable in the main function.
}
// * is the derefernce operator  & is the address of variable //
// A pointer that is not assigned any value but NULL is know as the NULL pointer.//
// it does not point to any object or function.
/* int * ptr = NULL*/ 
