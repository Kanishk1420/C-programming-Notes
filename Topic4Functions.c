/*Sometimes our program gets bigger in size and its not possible for a programmer to track where is error
function is a easy way to break our codes into chunks so that it is possible for a programmer to reuse them
SO FUNCTION IS A BLOCK OF CODE WHICH IS USED TO PERFORMS A PARTICULAR TASKS AND IT CAN BE USED ANY n NUMBER OF TIMES
example or syntax of function */
#include <stdio.h>
void display(); /*FUNCTION PRORTYPE :- is a way to tell the compiler about the function we are going to define in the program. */
int main()
{
    int a;
    printf("Inititalizing display function\n");
    display();
    printf("Display function finished its work\n"); /*FUNCTION CALL :- is a way to tell the compiler to execute the function body at the time the call is made. it will start from main function */
    return 0;
}
void display()
{
    printf("Hi i am display.\n"); /*FUNCTION DEFINITION :- when the function called from main() then the main function falls asleep and gets temporarily suspended. when the function body is done executing main() resumes*/

    /*WAP with three functions
    1- Good Morning which prints "Good morning"
    2- Good Afternoon which prints "Good Afternoon"
    3- Good Evening which prints "Good Evevning"
    4- Good Night which means "Good Night" */
}
void GoodMorning();
void GoodAfternoon();
void GoodEvening();
int main()
{
    GoodMorning();
    GoodAfternoon();
    GoodEvening();

    return 0;
}
void GoodMorning()
{
    printf("Good Morning\n");
}
void GoodAfternoon()
{
    printf("Good Afternoon\n");
}
void GoodEvening()
{
    printf("Good Evening\n");
}
/* Execution of a C program starts from from main()
A C porgram can have more than one function
Every function gets called directly or indirectly from main()
Types of functions
i)Library functions :- Commonly required functions grouped togrther in a library file on disk example like printf etc
ii)User defined functions :- These are the functions declared and defined by the user. example void a,b,c */

/* Passing values to functions
Jo function value accept karta hei usko bolte hei parameters 
Jo function value deta hei return value*/
int sum(int a, int b); // here a and b are parameters
int main() {
  int c;
  c = sum(3,14); // here 2 and 3 are arguments
  printf("the value of c is %d\n",c);
  return 0;
}
  int sum(int a, int b){ 
  int C ;
  C = a + b;
  return C;
  // use the library functions to calculate the aera of  square with side a
  int side,n;
 printf("Enter the value of side\n");
 scanf("%d", &n);
 side = pow(n,2);
 printf("The value of aera is %d",side);
 /* Recursion :- a function calling itself is also called recursive function.
 factorial(n)= 1*2*3*...............n= factorial (n-1)*n*/
} // a function can return only one value at a time.

// use the  functions to calculate the average of three sum
int average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("enter the value of a:\n");
    scanf("%d", &a);
    printf("enter the value of b:\n");
    scanf("%d", &b);
    printf("enter the value of c:\n");
    scanf("%d", &c);
    printf("the value of average is %d\n",average(a,b,c));
    return 0;
}

int average(int a, int b, int c){
    int result;
    result = (a + b + c)/3;
    return result;
}
/* Write a function to convert celcius tempertature into farenhiet using function*/
#include <stdio.h>
float tempertature(int c);
int main()
{
    int c;
    int f;
    printf("enter the value of Celsius:\n");
    scanf("%d", &c);
    printf("the temperature you will get: %f\n", tempertature(c));
    return 0;
}
float tempertature(int c)
{
    float f;
    f = (c * 9 / 5) + 32;
    return f;
}
/* write a function to calculate force of attraction on a body of mass m exerted by earth (g=9.8m/s^2) by using functions */

float gravitational(float m, float M, float r);
int main()
{
    float m;
    float M;
    float r;
    printf("enter the value of m\n");
    scanf("%f", &m);
    printf("enter the value of M\n");
    scanf("%f", &M);
    printf("enter the value of r\n");
    scanf("%f", &r);
    printf("the value of f gonna be :%f\n", gravitational(m, M, r));
    return 0;
}
float gravitational(float m, float M, float r)
{
    float f;
    f = (9.8 * m * M) / r * r;
    return f;
}

