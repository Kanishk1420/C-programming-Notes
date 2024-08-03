/* STRINGS*/
// printing all strings chacracters 
#include<stdio.h>
int main(){
    char st[]={'a','b','c','\0'}; 
    // \0 is null character it used to terminted the string end
    for (int i = 0; i < 3; i++)
    {
       printf("%c\t",st[i]);
    }
    return 0;
}
// A strings is stored just like an array in the memory as contriguos memory locations by taking 1 byte.
// print the string by without using null character
#include<stdio.h>
int main(){
    char st[]="abc"; 
    for (int i = 0; i < 3; i++)
    {
       printf("%c\t",st[i]);
    }
    return 0;
}
// to show the null character
#include<stdio.h>
int main(){
    char st[]={'a','b','c'}; 
    for (int i = 0; i < 4; i++)
    {
       printf("%c\t",st[i]);
    }
    return 0;
}
// or
#include<stdio.h>
int main(){
    char st[]="abc"; 
   printf("%s\n",st);
   // %s format specifier to print the string 
    return 0;
}
// Taking string input form user
#include<stdio.h>
int main(){
  char st[4];
  // if you add spaces then it will print only 4 characters of string 
  printf("Enter the input string \n");
  scanf("%s",st);
  printf("Your Output is :- %s",st);
  return 0;
}
// Scanf automatically adds a anull character when the enter key is pressed.
// To want spaces and be print in string then we use 
// Gets and puts()
 // gets():- gets basically stored the entered string in st you dont need scanf
#include<stdio.h>
int main(){
  char st[30];
  printf("Enter the input string \n");
  gets(st);
  printf("Your Output is :- %s", st);
  return 0;
}
// puts():- puts will shoft the cursor to next line 

// declare a string using pointers 
#include<stdio.h>
int main(){
char * ptr = "kanishk";
printf("%s",ptr);
return 0;
}
// STANDARD LIBRARY FUNCTIONS FOR STRING 
// C provides a set of standard library functions for string manupilation
// STREN:- This function count the number of characters in the string excluding the null characters.(\0) characters.
#include<stdio.h>
#include<string.h>
int main(){
char st[] = "kanishk";
printf("%d",strlen(st));
return 0;
}
// STRCPY :- This function is used to copy the content of second string into first string passed on it.
#include<stdio.h>
#include<string.h>
int main(){
char st[] = "kanishk";
char target[30];
strcpy(target,st);
printf("%s\n",st);
printf("%s",target);
return 0;
}
// STRCAT:- this function is used to concaternate the two strings
#include<stdio.h>
#include<string.h>
int main(){
  char st[10]="kanishk";
  char sy[10]= "Anish";
  strcat(sy,st); // concat
  printf("%s\n",sy); 
  printf("%d\n",strlen(sy));
}
// STRCMP():- This function is used to compare two strings. it returns 0 if the strings are equal
// a negative value if the first string mismatching character asc ii value is less than second string
// otherwise postive value.
#include<stdio.h>
#include<string.h>
int main(){
  char st[10]="kanishk";
  char sy[10]= "Anish";
 printf("%d\n",strcmp("far","joke")); // negative value
 printf("%d\n",strcmp("far","coke")); // postive value

} 