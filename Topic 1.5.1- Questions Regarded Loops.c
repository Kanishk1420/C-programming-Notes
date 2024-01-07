                                                                    // Topic 1.5.1- Questions Regarded Loops //
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int num;
    int sum;
    int b;
    int a,n;
    int guess, nguess;
    int factorial = 1;
    int isPrime;
    printf("QUESTION 1:-\n");
    /*WAP to print multiplication table of a given number n.*/
    printf("Enter the table you want to print");
    scanf("%d", &num);
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d\n", num, i, i * num);
    }
    printf("QUESTION 2:-\n");
    /*WAP to print multiplication of 6 table*/
    for (int i = 1; i <= 20; ++i)
    {
        printf("6 * %d = %d\n", i, 6 * i);
    }
    printf("QUESTION 3:-\n");
    /*WAP to print the program in reverse order*/
    printf("Enter the table you want to print");
    scanf("%d", &num);
    for (int i = 12; i; i--)
    {
        printf("%d * %d = %d\n", i, num * i);
    }
    printf("QUESTION 4:-\n");
    /*A do while loop is executed at least once*/
    /*WAP to print sum first ten natural numbers using for loop */
    for (int i = 1; i <= 10; i++)
        sum += i;
    {
        printf("the value of sum from 1 to 10 is %d\n", sum);
    }
    printf("QUESTION 5:-\n");
    /*WAP to print the output of multiplication of the number you want */
    printf("Enter the integer:\n");
    scanf("%d", &b);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", b, i, b * i);
    }
    printf("QUESTION 6:-\n");
    /* WAP to calculate the sum of the numbers occuring in the multiplication table of 8 */
  for (int i = 1; i < 11; i++)
    {
        sum += 8 * i;
        printf("8 * %d = %d\n", i, 8 * i);
        printf("The sum up to %d is: %d\n",11,sum);
    }
    printf("QUESTION 7:-\n");
    /* WAP to calculate the factorial of a given number using for loop */
   for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    printf("the value of factorial of %d is %d ",n,factorial);
    printf("QUESTION 8:-\n");
    /* WAP to check whether this number is prime or not */
    printf("Enter the number you want\n");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not a prime number\n", n);
    } 
    else if (n == 2 || n == 3) {
        printf("%d is a prime number\n", n);
    } 
    else if (n % 2 == 0 || n % 3 == 0) {
        printf("%d is not a prime number\n", n);
    } 
    else {
        printf("%d is a prime number\n", n);
    }
        /// EXTRA QUESTION ///
    srand(time(0));
    n = rand();
    do
    {
        printf("Guess the number btw 1 to 100\n");
        scanf("%d", &guess);
        if (guess > n)
        {
            printf("Lower number plss\n");
        }
        else if (guess < n)
        {
            printf("Higher number plss\n");
        }
        else
            printf("Congrats you took %d attempts\n", nguess);
    } while (guess != n); 
    return 0;
}
