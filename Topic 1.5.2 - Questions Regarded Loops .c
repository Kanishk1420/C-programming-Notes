                                                              // Topic 1.5.2 - Questions Regarded Loops //
#include <stdio.h>
#include <math.h> // library //
int main()
{
  int i;
  int n, k, c, sum, r;
  int sum1, k1, a, product;
  printf("how many times you want to print\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("word\n");
  }
  // 1. print from 1 to 100
  for (int i = 1; i <= 100; i++)
  {
    printf("%d\n", i);
  } //2. print even numbers 1 to 100
  for (int i = 0; i <= 100; i = i + 2)
  {
    printf("%d\n", i);
  }
  // 3.print odd numbers 1 to 100
  for (int i = 1; i <= 100; i = i + 2)
  {
    printf("%d\n", i);
  }
  // 4.print 19 table
  for (int i = 19; i <= 190; i = i + 19)
  {
    printf("%d\n", i);
  }
  // 5.print n table
  printf("how many times you want to print\n");
  scanf("%d", &n);
  for (int i = n; i <= n * 10; i = i + n)
  {
    printf("%d\n", i);
  }
  // 6.display the n terms of ap 1,3,5,7,9... upto n terms.
  printf("how many times you want to print\n");
  scanf("%d", &n);
  for (int i = 1; i <= 2 * n - 1; i = i + 2)
  {
    printf("%d\n", i);
  }
  // 7.display this ap 4,7,10,13,16...upto n terms
  printf("how many times you want to print\n");
  scanf("%d", &n);
  for (int i = 4; i < 3 * n + 1; i + 3)
  {
    printf("%d\n", i);
  }
  /*OR
  k=4
  for (int i=1; i<=n; i++)
  {
    printf("%d\n", k);
    k = k + 3;
  }*/
  // display gp 1,2,4,8,16,32.....upto n terms
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 1;
  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", k);
    k = k * 2;
  }
  // 8.display this gp 3,12,48.... upto n terms
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 3;
  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", k);
    k = k * 4;
  }
  // 9.display this ap 100,97,94....upto all terms which are postive
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 100;
  for (int i = 1; i <= n; i++) /*or use a=>0 in replace of i */
  {
    printf("%d\n", k);
    k = k - 3;
  }
  // 10.display this ap 100,75,50,25... upto n terms
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 100;
  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", k);
    k = k - 25;
  }
  // 11.display this gp 100,50,25... upto n terms
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 100;
  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", k);
    k = k / 2;
  }
  // loop ke andhar jo bhi daalo vo sab repeat hota hei //
  // break statement is use to terminate loop//
  //12. wap to check whether a number is prime or not //

  printf("Enter the number you want\n");
  scanf("%d", &n);
  if (n <= 1)
  {
    printf("%d is not a prime number\n", n);
  }
  else if (n == 2 || n == 3 || n == 5 || n == 7)
  {
    printf("%d is a prime number\n", n);
  }
  else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
  {
    printf("%d is a composite number \n", n);
  }
  else
  {
    printf("%d is a prime number\n", n);
  }
  // While loop //
  /*int i = 0;
  while (i < 20)
  {
    // code //
    i++;
  } */
  // 13.write the counting from 0 to 9 using while loop //
  while (i < 10)
  {
    printf("%d", i);
    i++;
  }
  // 14.predict the output //
  while (k <= 10)
  {
    printf("\n%d", k);
    k = k + 1;
  }
  //  output ;- random value will come //
  // x++ = x = x+1; post increment //
  // ++x = x = x+1; pre increment  //
  // x-- = x = x-1; post decrement  //
  // --x = x = x-1; pre decrement  //
  /*-----------------------------------------------------------------------------*/
  // 15.print even numbers 1 to 100//
  while (i <= 100)
  {
    printf("%d\n", i);
    i = i + 2;
  }
  //16. print n table using while loop
  printf("how many times you want to print\n");
  scanf("%d", &n);
  while (i <= n * 10)
  {
    printf("%d\n", i);
    i = i + n;
  }
  //17. print 6 table using while loop
  while (i <= 6 * 10)
  {
    printf("%d\n", i);
    i = i + 6;
  }
  // 18.display gp 1,2,4,8,16,32.....upto n terms using while loop
  printf("how many times you want to print\n");
  scanf("%d", &n);
  while (i <= n)
  {
    k = 1;
    i = 0;
    printf("%d\n", k);
    k = k * 2;
    i++;
  }
  // 19.display this ap 4,7,10,13,16...upto n terms using while loop
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 4;
  i = 0;
  while (i <= n)
  {
    printf("%d\n", k);
    k = k + 3;
    i++;
  }
  // 20.display this ap 100,97,94....upto all terms which are postive using while loop
  printf("how many times you want to print\n");
  scanf("%d", &n);
  k = 100;
  i = 0;
  while (i <= n)
  {
    printf("%d\n", k);
    k = k - 3;
    i++;
  }
  // questions using operators
  //21. wap to count digits of a given number by using both loops//
  // while //

  printf("enter the number:\n");
  scanf("%d", &n);
  c = 0;
  while (n != 0)
  {
    n = n / 10;
    c++;
  }
  printf("the digits you got %d", c);
  // for //

  printf("enter the number:\n");
  scanf("%d", &n);
  for (c = 0; n != 0; c++)
  {
    n = n / 10;
    printf("the numnber which contains digits %d\n", c);
  }
  //22. wap to print sum of digits of a given number //

  printf("enter the number:\n");
  scanf("%d", &n);
  i /*sum */ = 0;
  k /*last digit*/ = 0;
  while (n != 0)
  {
    k = n % 10;
    i = i + k;
    n = n / 10;
  }
  printf("the sum of numbers contains digits %d\n", i);
  // for //
  printf("enter the number:\n");
  scanf("%d", &n);
  for (sum = 0; n != 0; sum++)
  {
    k = n % 10;
    sum = sum + k;
    n = n / 10;
  }
  printf("the sum of numbers contains digits %d\n", sum);
  //23.wap to print sum of all the even digits a given number //

  printf("Enter the number:\n");
  scanf("%d", &n);

  while (n != 0)
  {
    k = n % 10;
    if (k % 2 == 0)
    {
      sum = sum + k;
    }
    n = n / 10;
  }
  //24. Print the sum of even digits
  printf("The sum of numbers containing even digits: %d\n", sum);
  // for loop //

  printf("enter the number:\n");
  scanf("%d", &n);
  for (c = 0; n != 0; c++)
  {
    k = n % 10;
    if (k % 2 == 0)
    {
      sum = sum + k;
    }
    n = n / 10;
  }
  printf("the sum of numbers contains digits %d\n", sum);
  //25. print the sum of odd digits using loops //

  printf("Enter the number:\n");
  scanf("%d", &n);
  sum = 0;
  while (n != 0)
  {
    k = n % 10;
    if (k % 2 != 0)
    {
      sum = sum + k;
    }
    n = n / 10;
  }
  printf("the sum of numbers contains digits %d\n", sum);
  // for loop //
  printf("enter the number:\n");
  scanf("%d", &n);
  for (c = 0; n != 0; c++)
  {
    k = n % 10;
    if (k % 2 != 0)
    {
      sum = sum + k;
    }
    n = n / 10;
  }
  printf("the sum of numbers contains digits %d\n", sum);
  //26. wap to print reverse of a given number.

  printf("enter the number:\n");
  scanf("%d", &n);
  r = 0;
  while (n != 0)
  {
    r = r + (n % 10);
    r = r * 10;
    n = n / 10;
  }
  r = r / 10;
  printf("the reverse number is %d", r);
  //27.wap to print the sum of reverse number.

  printf("enter the number:\n");
  scanf("%d", &n);
  r = 0;
  sum = 0;
  sum1 = 0;
  while (n != 0)
  {
    k = n % 10;
    sum = sum + k;
    r = r * 10;
    k1 = r + (n % 10);
    sum1 = sum1 + k1;
    n = n / 10;
    a = sum + sum1;
  }
  printf("the reverse number sum is  is %d", a);
  //28. wap to print the sum of the seris 1+2+3+4+5+6..... upto n.

  printf("enter the number of terms :\n");
  scanf("%d", &n);
  sum = 0;
  for (int a = 1; a <= n; a++)
  {
    sum = sum + a;
  }
  printf("the number of sums is %d\n", sum);
  //29. wap to print the sum of the seris 1-2+3-4+5-6..... upto n.

  printf("enter the number of terms :\n");
  scanf("%d", &n);
  sum = 0;
  for (int a = 1; a <= n; a++)
  {
    if (a % 2 == 0)
    {
      sum = sum - a;
    }
    else if (a % 2 != 0)
    {
      sum = sum + a;
    }
  }
  printf("the number of sums is %d\n", sum);
  /*30.print the factorial of a given number n*/

  printf("enter the number of terms you want factorial:\n");
  scanf("%d", &n);
  product = 1;
  for (int a = 1; a <= n; a++)
  {
    product = product * a;
  }
  printf("the factorial you got %d", product);
  //31. wap to print the factorial of n. and sum it

  printf("enter the number of terms you want factorial:\n");
  scanf("%d", &n);
  product = 1;
  sum = 0;
  for (int a = 1; a <= n; a++)
  {
    product = product * a;
    sum = sum + product;
  }
  printf("the factorial you got %d", sum);
  //32. wap to print the factorial of n and sum it by putting it in for loop

  printf("enter the number of terms you want factorial:\n");
  scanf("%d", &n);
  product = 1;
  sum = 0;
  for (int a = 1; a <= n; a++)
  {
    product = product * a;
    sum = sum + product;
    printf("the factorial you got %d is: %d and the sum is %d\n", a, product, sum);
  }
  /*33. print the factorial of a given number n by using while loop */

  printf("enter the number of terms you want factorial:\n");
  scanf("%d", &n);
  product = 1;
  a = 1;
  while (a<=n)
  {
    product = product*a;
    a++;
  }
  printf("the factorial you got %d", product);
  /*-----------------------------------------------------------------------------------*/
  return 0;
}
