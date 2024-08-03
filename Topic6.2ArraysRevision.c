// marks for 5 students input and output
#include <stdio.h>
int main()
{
  int marks[5];
  printf("Enter 5 marks of students:-\n");
  for (int i = 1; i < 5; i++)
  {
    scanf("%d\n", &marks[i]);
  }
  printf("Makrs of 2nd and 3rd student are %d %d", marks[1], marks[2]);
  return 0;
}
// initilization of an array
#include <stdio.h>
int main()
{
  int mar[] = {45, 67, 89, 90};
  for (int i = 0; i < 4; i++)
  {
    printf("%d\t", mar[i]);
  }
  return 0;
}
#include <stdio.h>
int main()
{
  int mar[] = {45, 67, 89, 90};
  for (int i = 0; i < 4; i++)
  {
    printf("%d\t", &mar[i]);
    // 4 bytes got increased in every loop
  }
  return 0;
}

// passing array to function
#include <stdio.h>
void printarray(int *i, int n);
// or
void printarray(int i[], int n)
{
}
int main()
{
  return 0;
}

// passing array to function with ex
#include <stdio.h>
void printarrayi(int *i);
// or
void printarrayi(int i[5])
{
  printf("Enter the array \n");
  for (int j = 0; j < 5; j++)
  {
    scanf("%d\n", &i[j]);
  }
}
int main()
{
  int a[5];
  printarrayi(&a[0]); // Pass the address of the first element
  printf("Array elements:\n");
  for (int j = 0; j < 5; j++)
  {
    printf("%d\t", a[j]);
  }
  printf("%d\t", a);
  return 0;
}
// multidimension array ex:-
#include <stdio.h>
int main()
{
  // input
  int arr[3][2];              // Array decelaration
  for (int i = 0; i < 3; i++) // i row declare
  {
    for (int j = 0; j < 2; j++) // j row declare
    {
      printf("Enter the value of arr[%d][%d]\n", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  // output
  for (int i = 0; i < 3; i++) // i row
  {
    for (int j = 0; j < 2; j++) // j row
    {
      printf("Enter the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    }
  }
  return 0;
}

// multiplication of n and m through multidimension array ex:-
#include <stdio.h>
int main()
{
  int n;
  int m;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Input for 'm'
  printf("Enter the value of m: ");
  scanf("%d", &m);
  int arr[n][m];
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      printf("[%d][%d]\n", n * j, m * j);
    }
  }
  return 0;
}
#include <stdio.h>
// write a multidimensional array of odd numbers and even numbers.
int main()
{
  int arr[10][10];
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      if (j % 2 == 0)
      {
        printf("[%d]\n", j);
      }
      else
      {
        printf("[%d]", j);
      }
    }
  }
  return 0;
}
// Create an array 10 number. Verify that pointer airthmetic that (ptr+2) points to the third element.
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *ptr = &arr[0];
  for (int i = 0; i < 10; i++)
  {
    printf("[%d]\t", arr[i]);
  }
  printf("\n");
  printf("%d\n", *ptr + 2);

  return 0;
}
// Create an array of 10 integers and store multiplication table of 5 in it.
#include <stdio.h>
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 1; i <= 10; i++)
  {
    printf("5*%d=[%d]\n", i, 5 * arr[i]);
  }
  return 0;
}
// Create an array of 10 integers and store multiplication table of n in it.
#include <stdio.h>
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n;
  printf("Enter the table you want to multiply:-\n");
  scanf("%d", &n);
  for (int i = 0; i <= 10; i++)
  {
    printf("%d*%d=[%d]\n", n, i, n * arr[i]);
  }
  return 0;
}
// wap a program contaning a function which reverse the array passed into to it.
#include <stdio.h>
void array(int arr[]);
void array(int arr[])
{
  int count;
  for (int i = 0; i < 11; i++)
  {
    count = i;
    printf("[%d]\t", i);
  }
  printf("the total count is %d\n", count);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  array(arr);
  return 0;
}
// or
// wap a program contaning a function which reverse the array passed into to it.
#include <stdio.h>
void arrayi(int arr[], int n);
void printarray(int a[], int n);
void printarray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\n");
}
void arrayi(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  arrayi(arr, 6);
  printarray(arr, 6);
  return 0;
}
// wap a program containing tables of multiplication tables of the numbers 2,7 and 9
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n;
  int n1;
  int n2;
  printf("Enter the First table\n");
  scanf("%d", &n);
  printf("Enter the Second table\n");
  scanf("%d", &n1);
  printf("Enter the Third table\n");
  scanf("%d", &n2);
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("[%d][%d][%d]\n", n * arr[j], n1 * arr[j], n2 * arr[j]);
    }
  }
  return 0;
}
// wap a three dimension array and print the address of its elements in increasing order
#include <stdio.h>
void array(int arr[2][3][4])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (char k = 0; k < 4; k++)
      {
        printf("%u\t", &arr[i][j][k]);
      }
    }
  }
}
int main()
{
  int arr[2][3][4];
  array(arr);
  return 0;
}
//C program to declare, initialize, input and print array elements
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
  int arr[MAX_SIZE];
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Enter [%d] st element\n",i);
    scanf("%d",&arr[i]);
  }
  printf("Your array is \n");
  for (int i = 0; i < n; i++)
  {
    printf("[%d]\t",arr[i]);
  }
  return 0;
}
//C program to find sum of array elements
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
  int arr[MAX_SIZE];
  int n;
  int sum = 0;
  printf("Enter size of array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Enter [%d] st element\n",i);
    scanf("%d",&arr[i]);
  }
  printf("Your array is \n");
  for (int i = 0; i < n; i++)
  {
    printf("[%d]\t",arr[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i++)
  {
    sum = sum+arr[i];
  }
  printf("Sum is %d\n",sum);
  return 0;
}