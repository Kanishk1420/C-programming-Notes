// Write a program to take string as an input from the user %s confirm that the strings are equal
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[100];
  char str2[100];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  if (strcmp(str1, str2) == 0)
  {
    printf("The strings are equal.\n");
  }
  else
  {
    printf("The strings are not equal.\n");
  }

  return 0;
}
// write your own version of strlen
#include <stdio.h>
#include <string.h>
int main()
{
  char st[20];
  printf("Enter the input string \n");
  scanf("%s", st);
  int a = strlen(st);
  printf("The lenght of string is :- %d", a);
  return 0;
}

// write a function slice() to slice a string. it should change the original string such that it is now the sliced string. Take m and n as the start and ending postion for slice.
#include <stdio.h>
#include <string.h>
char *slice(char str[], int m, int n);
char *slice(char str[], int m, int n)
{
  int i = 0;
  char *ptr1 = &str[m];
  char *ptr2 = &str[n];
  str = ptr1;
  str[n] = '\0';
  return str;
}
int main()
{
  char str[] = "Kanishk";
  printf("%s", slice(str, 1, 5));
  return 0;
} // or
#include <stdio.h>
#include <string.h>

int main()
{
  char str[8] = "Kanishk"; // Ensure the array size is sufficient to include the null terminator
  int n = 6;
  int j = 0;

  // Slice the string from position m to n
  for (int i = 1; i <= n; i++)
  {
    str[j++] = str[i];
  }
  str[j] = '\0'; // Null-terminate the sliced string

  printf("%s\n", str); // Output should be "anish"
  return 0;
}
// print the string by using function with strlen and strcpy
#include <stdio.h>
#include <string.h>
char slic(char str[], char target[]);
char slic(char str[], char target[])
{
  strcpy(target, str);
  printf("%s\n", target);
  printf("%d\n", strlen(target));
}
int main()
{
  char str[10];
  char target[10];
  printf("%s\n", slic("Sam", target));
  return 0;
}
// print your own string lenght
// print your own string lenght
#include <stdio.h>
int main()
{
  char str[10];
  printf("Enter the string %s\n", str);
  scanf("%s", str);
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  printf("%d\n", count);
  return 0;
}
// write a program to encrypt a string by adding 1 to ASCII Value of its characters.
// write a program to encrypt a string by adding 1 to ASCII Value of its characters.
#include <stdio.h>
int main()
{
  char str[] = "doom";
  int count;
  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c ASCII Value is  %d\n", str[i], str[i]);
  }
  printf("%s\n", str);
  return 0;
}
// Original String: “Doom”
// ‘D’ has an ASCII value of 68
// ‘o’ has an ASCII value of 111
// ‘o’ has an ASCII value of 111
// ‘m’ has an ASCII value of 109
// Adding 1 to Each ASCII Value:
// ‘D’ (68) + 1 = ‘E’ (69)
// ‘o’ (111) + 1 = ‘p’ (112)
// ‘o’ (111) + 1 = ‘p’ (112)
// ‘m’ (109) + 1 = ‘n’ (110)
// Resulting Encrypted String: “Eppn”

// write a program to decrypt a string by adding 1 to ASCII Value of its characters.
#include <stdio.h>
int main()
{
  char str[] = "eppn";
  int count;
  for (int i = 3; str[i] != '\0'; i--)
  {
    str[i]--;
    printf("%c %d\n", str[i], str[i]);
  }
  printf("%s\n", str);
  return 0;
}
// write a program to divide the string onto substrings and then count it.
#include <stdio.h>
int main()
{
  char str[] = "doom";
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c\n", str[i]);
  }
  printf("%s\n", str);
  for (int j = 0; str[j] != '\0'; j++)
  {
    count++;
  }
  printf("%d\n", count);
  return 0;
}
// write a program to check whether a given character is present or not.
#include <stdio.h>
int main()
{
  char str[] = "doom";
  char st[] = "doi";
  int found = 0;

  // Loop through each character in st
  for (int j = 0; st[j] != '\0'; j++)
  {
    // Loop through each character in str
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == st[j])
      {
        found = 1;
        break;
      }
    }
  }
  if (found)
  {
    printf("Yes, it contains one of the letters.\n");
  }
  else
  {
    printf("It does not contain any of the letters.\n");
  }
  return 0;
}
// find the lenght of the string
#include <stdio.h>
#include <string.h>
int main()
{
  char st[] = "Mauvika";
  int count = 0;
  for (int i = 0; st[i] != '\0'; i++)
  {
    count++;
  }
  printf("%d\n", count);
  return 0;
}
// C program to copy one string to another strings
#include <stdio.h>
#include <string.h>
int main()
{
  char st[] = "Mauvika is pyro archon";
  char stt[20];
  printf("%s\n", st);
  for (int i = 0; st[i] != '\0'; i++)
  {
    stt[20] = st[i];
    printf("%c", stt[20]);
    stt[20]++;
  }
  stt[20] = '\0';
  return 0;
}
// C program to concatenate two strings
#include <stdio.h>
#include <string.h>
int main()
{
  char st[] = "Mauvika";
  char stt[] = " is pyro archon";
  printf("%s\n", st);
  for (int i = 0; st[i] != '\0'; i++)
  {
    printf("%c", st[i]);
  }
  for (int j = 0; stt[j] != '\0'; j++)
  {
    printf("%c", stt[j]);
  }
  stt[15] = '\0';
  return 0;
}
// C program to compare two strings
#include <stdio.h>
#include <string.h>
int main()
{
  char st[50] = "Pyro";
  char stt[50] = "Pyro";
  int value;
  value = strcmp(st, stt);
  if (value == 0)
  {
    printf("Strings are equal\n");
  }
  else
    printf("Strings are not equal");

  return 0;
}
// C program to convert lowercase string to uppercase
#include <stdio.h>
#include <string.h>
int main()
{
  char st[20] = "furina";
  int count;
  printf("%s\n", st);
  for (int i = 0; st[i] != 0; i++)
  {
    // printf("%d\n",st[i]);
    count = st[i] - 32;
    // printf("%d\n",count);
    st[i] = (char)count;
  }
  printf("%s\n", st);
  return 0;
}
//  Lowercase letters (‘a’ to ‘z’) have ASCII values from 97 to 122.
// Uppercase letters (‘A’ to ‘Z’) have ASCII values from 65 to 90.
// C program to find reverse of a string
#include <stdio.h>
#include <string.h>
int main()
{
  char st[8] = "nahida";
  for (int i = 7; i >= 0; i--)
  {
    printf("%c", st[i]);
  }
  st[8] = '\0';
  return 0;
}
// convert uppercase to lowercase
#include <stdio.h>
#include <string.h>
int main()
{
  char st[8] = "FURINA";
  int count;
  printf("%s\n", st);
  for (int i = 0; st[i] != 0; i++)
  {
    // printf("%d\n",st[i]);
    count = st[i] + 32;
    // printf("%d\n",count);
    st[i] = (char)count;
  }
  printf("%s\n", st);
  for (int j = 7; j >= 0; j--)
  {
    printf("%c", st[j]);
  }
  st[8] = '\0';
  return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int len, i, flag = 1;

  // Input the string
  printf("Enter a string: ");
  scanf("%s", str);

  len = strlen(str);

  // Check if the string is a palindrome
  for (i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - i - 1])
    {
      flag = 0;
      break;
    }
  }

  if (flag)
  {
    printf("The string \"%s\" is a palindrome.\n", str);
  }
  else
  {
    printf("The string \"%s\" is not a palindrome.\n", str);
  }

  return 0;
}
// C program to toggle case of each character in a string
#include<stdio.h>
#include<string.h>
int main(){
  char st[] = "Raiden";
  int count;
  int count2;
count = st[0]+32;
st[0]= (char)count;
printf("%c\n",st[0]);
for (int i = 1; st[i]!='\0'; i++)
{
  count2 = st[i]-32;
  st[i]= (char)count2;
  printf("%c",st[i]);
}
printf("\n");
printf("%s\n",st);
return 0;
}
// OR
#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "Raiden";
    int i;

    for (i = 0; st[i] != '\0'; i++) {
        if (st[i] >= 'a' && st[i] <= 'z') {
            st[i] = st[i] - 32; // Convert lowercase to uppercase
        } else if (st[i] >= 'A' && st[i] <= 'Z') {
            st[i] = st[i] + 32; // Convert uppercase to lowercase
        }
    }

    // Print the toggled string
    printf("Toggled string: %s\n", st);

    return 0;
}
// C program to count total number of vowels and consonants in a sting
#include <stdio.h>
#include <string.h>

int main()
{
  char st[] = "Raiden";
  int vowel = 0;
  int cons = 0;
  for (int i = 0; i < 6; i++)
  {
    if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))
    {
      if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ||
          st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
      {
        vowel++;
      }
      else
      {
        cons++;
      }
    }
  }
  printf("Total number of vowel = %d\n", vowel);
  printf("Total number of consonant = %d\n", cons);

  return 0;
}
// C program to count total number of alpahabets in string
#include <stdio.h>
#include <string.h>
int main()
{
  int st[20];
  int count = 0;
  printf("Enter the string:- \n");
  scanf("%s", st);
  for (int i = 0; i<strlen(st); i++)
  {
    count++;
  }
  printf("Total no of alphabets are :- %d\n", count);
  printf("Your Output is %s\n", st);
  return 0;
}
