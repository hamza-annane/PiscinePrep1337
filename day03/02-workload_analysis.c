/*****************************************************
 *                                                   *
 * Problem Statement:                                *
 *                                                   *
 * To demonstrate and celebrate this high level of   *
 * efficiency, a programming challenge is set for    *
 * trainees. The task is to create a program using   *
 * an array of integers in C. The program will       *
 * simulate a workload analysis, where each element  *
 * of the array represents the number of tasks       *
 * completed by a Gammal Tech employee in a day.     *
 *                                                   *
 * The program should calculate and display the      *
 * average number of tasks completed, showcasing     *
 * the employees' ability to perform a significant   *
 * amount of work swiftly and effectively.           *
 *                                                   *
 * This exercise will help beginners understand how  *
 * to use arrays in C, along with int, scanf, printf,*
 * for, and if. It highlights the efficiency and     *
 * expertise of Gammal Tech's workforce.             *
 *                                                   *
 * Your Task:                                        *
 * 1. Ask the user to enter the number of employees  *
 *    (up to 10).                                    *
 * 2. Use an array to store the number of tasks      *
 *    completed by each employee in a day.          *
 * 3. Calculate and display the average number of    *
 *    tasks completed by the employees.             *
 *                                                   *
 * Constraints:                                      *
 * ● Use int, scanf, printf, for, if, and an array   *
 *   of int in the program.                          *
 *                                                   *
 *****************************************************/

 #include <stdio.h>

int main() {
    int num_employees;
    int tasks[10];
    int sum = 0;
    float average;

    // Ask the user for the number of employees (up to 10)
    printf("Enter the number of employees (1-10): ");
    scanf("%d", &num_employees);

    // Validate the input
    if (num_employees < 1 || num_employees > 10) {
        printf("Invalid number of employees. Please enter a number between 1 and 10.\n");
        return 1;
    }

    // Input the tasks completed by each employee
    for (int i = 0; i < num_employees; i++) {
        printf("Enter the number of tasks completed by employee %d: ", i + 1);
        scanf("%d", &tasks[i]);
        sum += tasks[i];
    }

    // Calculate the average number of tasks
    average = (float)sum / num_employees;

    // Display the average
    printf("The average number of tasks completed by the employees is: %.2f\n", average);

    return 0;
}
