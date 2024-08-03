//Write a function that prints Namaste if user is Indian and Konichiwa if the user is French.
#include <stdio.h>
void greetUser() {
    char c;
    printf("Enter the language you want to print (I for Indian, J for Japanese):\n");
    scanf(" %c", &c); // Added space before %c to consume newline characters
    
    if (c == 'I') {
        printf("Namaste\n");
    } else if (c == 'J') { // Corrected comparison
        printf("Konichiwa minasan\n");
    } else {
        printf("Sorry, I didn't get it\n");
    }
}

int main() {
    greetUser();
    return 0;
}
// functions are two types
// library functions and User-defined
//special functions inbuilt in c are called library functions like scanf() and printf() 
//user-defined functions like declared and defined by programmer.
//functions can take value & give some value. if we will give parameters then it will return value
void lion(int a);

//when a function calls itself is called recursion.
// normal function call: --- main -->f(x)--->y(x)
//                             |------||-------|
// recursive function call: --- main --> f(x)--->f(x)
//                             |------||-------|                                               

//recursive code except using loop to print we use recurisve to print 
//recurssive code of print hello world
int main(){
printHW(5);
return 0;
}
void printHW(int count){
    if(count ==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

//recressive of sum of first natural numbers n
int main(){
printf("sum is :%d", sum(7));
return 0;
}

int sum(int n){
    if (n==0)
    {
        return 0;
    }
    
    int sumn1 = n+ sum(n-1);
    return sumn1;
}
// recurssive code of factorial number
int fac(int n);

int main() {
    printf("Factorial is %d\n", fac(6));
    return 0;
}

// Recursive function to calculate factorial
int fac(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    }
    int facc = n * fac(n - 1); // Recursive case
    return facc;
}

// Function to calculate cube recursively
int cube(int a) {
    if (a == 0) {
        return 1; // Base case: 0 cubed is 1
    }
    int b = a * a * a; // Recursive case
    return b;
}

int main() {
    printf("Cube is %d\n", cube(3));
    return 0;
}
// C program to find circumference of circle using recurssive;

int circle(float r){
    if(r==0.00){
        return 1;
    }
    float d = circle(2*3.14*r);
    return d;
}
int main(){
    printf("circumference is %d\n", circle(3.4));
    return 0;
}
// C program to print n terms of the fibonacci sequence using recursion
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
int c = fib(n-1)+fib(n-2);
return c;
}
int main(){
    printf("fibonanci sequence is %d\n",fib(2));
    return 0;
}

//C program addition of two munbers using void by call by refernce 
#include <stdio.h>
void summ(int a ,int b);
int main(){
int num1=23;
int num2=34;
summ(num1,num2);
return 0;
}
void summ(int a, int b){
int c = a+b;
printf("%d\n",c);
}
