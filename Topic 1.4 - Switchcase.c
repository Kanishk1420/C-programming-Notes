                                                    // Topic 1.4 - Switchcase //
#include <stdio.h>
int main()
{
    int a, rating, marks;
    float total, maths, chemistry, physics;
    float income, tax;
    float num1,num2,num3;
    char ch;
    printf("Enter your number:\n");
    scanf("%d", &a);
    // q0  A is less than 5 or not ? //
    (a < 5) ? printf("A is less than 5\n", a) : printf("A is not less than 5\n", a);
    printf("Enter your rating\n");
    scanf("%d", &rating); //q1 Use '&' to take the address of 'rating'

    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("invalid rating!\n");
        break;
    }
    printf("Enter the student marks\n");          // q2
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        printf("the following student got A grade\n");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("the following student got B grade\n");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("the following student got C grade\n");
    }
    else if (marks < 70 && marks >= 0)
    {
        printf("The following student got D grade\n");
    }
    printf("Enter the marks of student in chemistry:");
    scanf("%f", &maths);
    printf("Enter the marks of student in maths:");
    scanf("%f", &chemistry);
    printf("Enter the marks of student in physics:");
    scanf("%f", &physics);
    total = (maths + chemistry + physics) / 3;
    if (total <= 40 || physics <= 33 || chemistry <= 33 || maths <= 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }
    printf("Enter your income:");              //q3
    scanf("%f", &income);
    if (income > 2.5 && income < 5.0)
    {
        printf("You have to pay 5 percentage tax %f\n", income);
    }
    else if (income > 5.0 && income < 10.0)
    {
        printf("You have to pay 20 percentage tax %f\n", income);
    }
    else if (income > 10.0)
    {
        printf("You have to pay 30 percentage tax %f\n", income);
    }
  // WAP to find greatest of three numbers entered by the user          //q4
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    if (num1> num2 && num1 > num3) {
        printf("Number entered in the first place is the greatest: %f\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("Number entered in the second place is the greatest: %f\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("Number entered in the third place is the greatest: %f\n", num3);
    } else {
        printf("There are two or more numbers that are equal and the greatest.\n");
    }
    return 0;
printf("Enter the values:\n");
scanf("%c",&ch);
// ASCII (97-122) lowercase alphabets //       //q5
if (ch<=122 && ch>=97) 
{
    printf("it is lowercase");
}
else{
    printf("it is not lowercase");
}
return 0;
}

