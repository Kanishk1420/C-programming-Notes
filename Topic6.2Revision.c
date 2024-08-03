#include <stdio.h>
int sum(int x, int y); // => function prototype, x and y are parameters
int main()
{
    sum(23, 45);
    sum(35, 89); // function call 23,45 are arguments
    sum(76, 90);
}
int sum(int x, int y)
{ // => function defination
    int i = x + y;
    printf("%d\n", i);
    return i;
}
// void will not return any value
// recusive function.
#include <stdio.h>
int fac(int n);
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fac(n - 1) * (n);
}
int main()
{
    printf("%d\n", fac(6));
    return 0;
}

// avg of three numbers
#include <stdio.h>
int avg(int a, int b, int c);
int avg(int a, int b, int c)
{
    return a + b + c / 3;
}
int main()
{
    printf("%d\n", avg(23, 45, 67));
    return 0;
}
// sum of first nth term
#include <stdio.h>
int sumy(int n);
int sumy(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n + sumy(n - 1);
}
int main()
{
    printf("%d\n", sumy(10));
    return 0;
}
// pattern program
#include <stdio.h>
void star(int n);
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        // this loop  runs from 0 to 2
        // if i = 0 --> print 1 star
        // if i = 1 --> print 3 star
        // if i = 2 --> print 5 star
        // no_of_stars = i%2!==0;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    star(5);
    star(7);
    return 0;
}
// sum function cannot chnage x using a because copy of x is provided to sum in a; in call by reference

// Arrays allow you to store single variable to store multiple values.
#include<stdio.h>
int main(){
  int marks[90]; // reserve space to store 90 integers
  marks[0]=45;
  marks[1]=56;
  // we can go  all the way till marks[89]
  printf("%d\n %d\n",marks[0]);
}

// initilization of an array
#include<stdio.h>
int main(){
  int mar[]={45,67,89,90};
  for (int i = 0; i < 4; i++)
  {
    printf("%d\t",mar[i]);
  }
  return 0;
}
// pointer airthmetatic
#include<stdio.h>
int main(){
  int i = 45;
  int *ptr = &i;
  printf("%u\n",ptr);
  ptr++;
  printf("%u\n",ptr);
  ptr--;
  printf("%u\n",ptr);
  --ptr;
  printf("%u\n",ptr);
  ++ptr;
  printf("%u\n",ptr);
  return 0;
}
// passing or travsese the array through pointer.
#include<stdio.h>
int main(){
  int mar[]={45,67,89,90};
  int *ptr = &mar[0];
  for (int i = 0; i < 4; i++)
  {
    printf("%d\t",mar[i]);
    printf("%d\t",*ptr); // the ptr will remain at starting of array index at 0
    ptr++;
  }
  return 0;
}
