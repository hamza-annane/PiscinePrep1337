#include <stdio.h>
/*
*   Write a C program that displays your personal information:
*   last name, first name, age, gender, and email address.
*   The data should be entered via the keyboard.
*
*/

int main()
{
    char last_name[20];
    char first_name[20];

    int  age;
    char gender[20];

    char email_address[30];

    printf("what is your last name: ");
    scanf("%s",last_name);

    printf("what is your first name: ");
    scanf("%s",first_name);

    printf("what is your age: ");
    scanf("%d",&age);

    printf("what is your gender: ");
    scanf("%s",gender);

    printf("what is your Email Address: ");
    scanf("%s",email_address);

    printf("====================Personal Information Record====================\n");

    printf("Full Name: %s %s\n",first_name,last_name);
    printf("Age: %d\n",age);
    printf("Gender: %s\n",gender);
    printf("Email Address: %s\n",email_address);


    return (0);

}