/*  ARRAYS */
/* Collection of Similar data types stored at contiguous memory locations is called arrays */
// Synatx :- int marks[3], char name[10], float price[2];
// input and output
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 5;
    int mar[3] = {a, b, c, d};
    printf("%d\n", mar[1]);
    // printing 3 marks
 int marks[3];
    printf("enter marks:");
    scanf("%d", &marks[0]);
    printf("enter marks:");
    scanf("%d", &marks[1]);
    printf("enter marks:");
    scanf("%d", &marks[2]);
    printf("total array is :- %d\n %d\n %d\n", marks[0],marks[1],marks[2]);
    return 0;
}
// write a program to enter a price of 3 items & print their final cost with gst
// write a program to enter a price of 3 items & print their final cost with gst
#include<stdio.h>
int main(){
    int sup;
    int supply[3];
    int gst;
    int final;
    printf("Enter product a:-");
    scanf("%d",&supply[0]);
    printf("Enter product b:-");
    scanf("%d",&supply[1]);
    printf("Enter product c:-");
    scanf("%d",&supply[2]);
    printf("the final prodcut of all three are :- %d\n",sup =supply[0]+supply[1]+supply[2]);
    gst = sup-(sup*100/(118));
    final = sup+ gst;
    printf("Final price is :-%d\n",final);
// initilization of an array
// int mae [] = {1,2};
// int mae [2]= {1,2};
// ________________________
// |         |            |
// |    1    |     2      |
// |         |            |
// |_________|____________|
// <-4bytes-><-----4bytes-> // memory reserved -- 8bytes (4*2)
// char name[10];  10*1= 40bytes
// int roll[30];   30*4 = 120bytes as 64-bit os system

//pointer airthmetic 
// pointer can be incremented & decremented //
// int age = 1;
// int *ptr = &age(2000);
// ptr++;(2000)
// ptr--; (2004)
// printf("%d\n",ptr++); here ptr will incremented as 4 bytes 
// similar as float
// float ty = 2;
// float *tyy = &ty;
// printf("%u\n",tyy);
// printf("%u\n",--tyy);
int age = 1;
float ty = 2;
int t = 0;
float *tyy = &ty;
int *ptr = &age;
int *ptrr = &t;
int *ptry = &t; 
printf("%u\n",ptr);
printf("%u\n",ptr++); 
printf("%u\n",ptr--);
printf("%u\n",--ptr);
printf("%u\n",tyy);
printf("%u\n",--tyy);
printf("the difference btw two pointers are %u\n",ptr-ptrr);
printf("the comparsion of two pointers are %u\n",tyy == ptr);
printf("the comparsion of two pointers are %u\n",ptrr == ptr); // the address of both two different pointers tored are different
printf("the comparsion of two pointers are %u\n",ptrr == ptry); 

// Arrays is a Pointer bruhh suprise
// int * ptr = & arr[0];
// int * ptr = arr;
// it means the array 0-index the pointer points the 0-index of the array

// traverse an array :- travel in an array
    int addar[10];
    int *ptr = &addar[0];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", ptr);
        ptr++; // Increment the pointer to the next element
    }

    // Print the array elements
    ptr = &addar[0]; // Reset the pointer to the beginning
    for (int i = 0; i < 5; i++) {
        printf("%d at index %d\n", *ptr, i);
        ptr++; // Move to the next element
    }
}

//Print Array from 0-6 using function declartions 
#include<stdio.h>
void printnumbers(int arr[]);
int main(){
int arr[] = {1,2,3,4,5,6};
printnumbers(arr);
return 0;
}
void printnumbers(int arr[]){
    for (int i = 0; i < 6; i++)
    {
        printf("%d \t" ,arr[i]);
    }
}

// OR

#include<stdio.h>
void printnumbers(int arr[]);
int main(){
int arr[6];
printnumbers(arr);
return 0;
}
void printnumbers(int arr[]){
    for (int i = 0; i < 7; i++)
    {
        printf("%d \t" ,i);
    }
}