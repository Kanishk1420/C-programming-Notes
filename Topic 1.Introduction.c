                        // C Programming //
                       // Imp Points here only with Codes //
// A medium for us to communicate with computers just like we talk to others by using 'hindi' or 'English' is called Programing
// Uses of C:- its used to write driver programs for devices like Tablets and printers etc like if you want to print through printer then printers need so you need a drivers of it which is made from C language.//
//a = 3 its like a is container and 3 is sugar :- VARIABLES //
// CONSTANTS :- An entity whose value didnt change ex:- 7,0,0.9,-5,$ //
// there are 3 types of constants Integers,Real,Characters //
#include<stdio.h>
// int main(){
    // int a;                 // This Command or Program (I gave the instruction) which will allocate to meomery RAM//
    // int b;                // Instructor Terminator //
    // return 0; }            // Instruction will execute in Same order in C//
                              // return 0 meaning successfully hogaya program //
// Compiler is a Program which converts C program into machine Language.//
//Library functions :- it contains lot of valuable library functions  like %d,%f,%c where it includes int,float,char//
  int main() {
    int a=4;
    float b=8.5;
    char c= 'u';
    int e = 45+4;
    int f;
    int g;
    printf("Example 1:-\n");
printf("The value of a is %d\n",a);
printf("the value of b is %f\n",b);
printf("the value of c is %c\n",c);
printf("the sum of a and b is %f\n",a+b);
printf("the sum of a and b is %f\n",a*b);

printf("Example 2:-\n");
printf("the value is %d\n",e);

printf("Example 3:-\n");
printf("Dial the value of f\n");
scanf("%d",&f);
printf("Dial the value of g\n");
scanf("%d",&g);
printf("the sum of f and g is %d\n",f*g);
return 0;
}
