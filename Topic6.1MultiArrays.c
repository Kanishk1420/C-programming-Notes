//                                  Mutidimension Array
//                                      2D Array
// int arr[][] = {{1,2},{3,4}};
// Declare Access matrix
// arr[0][0]   1
// arr[0][1]   2
// arr[1][0]   3
// arr [1][1]   4
#include <stdio.h>
// 2*3 matrix
int main()
{
  int marks[2][3];
  marks[0][0] = 34;
  marks[0][1] = 30;
  marks[0][2] = 50;
  marks[1][0] = 10;
  marks[1][1] = 20;
  marks[1][2] = 30;
  printf("%d", marks[0][0]);
  return 0;
}
#include <stdio.h>
// write a function to count the numbers of odd numbers and even numbers in an array
#include <stdio.h>
void printnumbersarray(int arr[]);
int main()
{
  int arr[20];
  printnumbersarray(&arr[0]);
  return 0;
}
void printnumbersarray(int arr[])
{
  for (int i = 0; i < 20; i++)
  {
    if (i % 2 == 0)
    {
      printf("Even Numbers %d\n", i);
    }
    else
    {
      printf("Odd Numbers %d\n", i);
    }
  }
}
#include <stdio.h>
// write the output
void printnumbersarray(int arr[]);
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  printnumbersarray(arr);
}
void printnumbersarray(int arr[])
{
  printf("%d\n", *(arr + 2));
  // 3
  printf("%d\n", *(arr + 5));
  // 0 error kinda
}
#include <stdio.h>

void fib(int arr[]);

int main()
{
  // Initialize the first two terms of the Fibonacci sequence
  int arr[] = {0, 1};

  // Call the function to generate the remaining terms
  fib(arr);

  // Print the entire sequence
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}

void fib(int arr[])
{
  // Generate Fibonacci numbers from the third term onward
  for (int i = 2; i < 10; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
}
