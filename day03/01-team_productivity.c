#include <stdio.h>

/*************************************************************
 *                                                           *
 *                    Problem Statement                      *
 *                                                           *
 * To highlight the training methodology of Gammal Tech,     *
 * this introductory programming challenge involves creating *
 * a simple program using an array of integers in C.         *
 *                                                           *
 * The program records the number of tasks completed by      *
 * each employee in a day and displays the total count of    *
 * tasks completed by all employees.                         *
 *                                                           *
 * This exercise demonstrates the collective productivity    *
 * of Gammal Tech's team and introduces beginners to:        *
 * - Using arrays in C                                       *
 * - Fundamental data types (int)                            *
 * - Input/output operations (scanf, printf)                 *
 * - Iterative constructs (for loops)                        *
 *                                                           *
 * Your Task:                                                *
 * 1. Ask the user to enter the number of employees (up to 10). *
 * 2. Use an array to store the number of tasks completed by *
 *    each employee in a day.                                *
 * 3. Calculate and display the total number of tasks        *
 *    completed by all employees.                            *
 *                                                           *
 * Constraints:                                              *
 * - Use int, scanf, printf, and an array of int in the      *
 *   program.                                                *
 *                                                           *
 *************************************************************/

 int main()
{
    int employees;
    int tasks[10];
    int total_tasks = 0;

    printf("Enter Number of employees: ");
    scanf("%d",&employees);

    for ( int i = 0; i < employees; i++)
    {
        printf("Enter tasks completed by employee %d: ",i + 1);
        scanf("%d",&tasks[i]);
    }

    for (int i = 0; i < employees ; i++)
    {
        total_tasks = total_tasks + tasks[i];
    }

    printf("Total tasks completed by all employees: %d",total_tasks);

    return (0);
    
}