                              // Topic 1.2- Operators & Precedence //
#include <stdio.h>
int main()
{
    int a = 4;
    int b = 7;
    int num; 
    int x = 2;
    int y = 3;
    int z = 3; 
    int k = 1;
    // char dt= '21 dec 2020'; 
    //warning: character constant too long for its type
    printf("the value of 3*(a + 4*b) is %d\n", 3 *(a + 4 * b));
    printf("the value of 8 * b / 3 * a is %d\n", 8 * b / 3 * a); //?//
    printf("the value of 3.0/8-2 is %f\n", 3.0/8-2);
    // 8*3 / 3*x = 24/6 will give you wrong answer 
    // 24/3*2
    // 8*2                              [x/y*z == (x/y)*z]
    // 16                               [x*y/z == (x*y)/z]  
    // In C language simple mathematical rules like bodmas no longer applies but there is one method called 
   // operator precedence & associativity 
 //  1rd  */%
 //  2nd  +- //
 //  3nd = //
//  Q3 wap to program to determine whether a number is divisible by 97 or not 
printf("enter the number\n");
scanf("%d", &num);
printf("divisiblity test retruns: %d\n", num % 97);
printf("the value of 3*x/y-z+k will be %f\n", 3 * x / y - z + k);
// 3.0 + 1 will be floating point number
return 0;
}
 
