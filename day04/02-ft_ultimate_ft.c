/******************************************************************************
 *                              Function Overview                             *
 *                                                                            *
 * Function Name: ft_ultimate_ft                                              *
 *                                                                            *
 * Description:                                                               *
 * This function accepts a parameter of type pointer to pointer to pointer    *
 * to pointer to pointer to pointer to pointer to pointer to pointer to an    *
 * integer. It sets the value of the pointed integer to "42".                 *
 *                                                                            *
 * Function Prototype:                                                        *
 * void ft_ultimate_ft(int *********nbr);                                     *
 *                                                                            *
 * Parameters:                                                                *
 * - int *********nbr: A pointer to a pointer to a pointer to a pointer to    *
 *                     a pointer to a pointer to a pointer to a pointer to a  *
 *                     pointer to an integer. This parameter indirectly       *
 *                     references the integer whose value needs to be set.    *
 *                                                                            *
 * Return Value:                                                              *
 * - None (void function).                                                    *
 *                                                                            *
 * Requirements:                                                              *
 * - The function must navigate through the levels of pointers to access the  *
 *   integer and assign it the value "42".                                    *
 *                                                                            *
 * Example Usage:                                                             *
 * int value;                                                                 *
 * int *ptr1 = &value;                                                        *
 * int **ptr2 = &ptr1;                                                        *
 * int ***ptr3 = &ptr2;                                                       *
 * int ****ptr4 = &ptr3;                                                      *
 * int *****ptr5 = &ptr4;                                                     *
 * int ******ptr6 = &ptr5;                                                    *
 * int *******ptr7 = &ptr6;                                                   *
 * int ********ptr8 = &ptr7;                                                  *
 * ft_ultimate_ft(&ptr8);                                                     *
 *                                                                            *
 * After execution, `value` will hold the value 42.                           *
 ******************************************************************************/

 #include <stdio.h>

 void ft_ultimate_ft(int *********nbr)
 {
    if (nbr != NULL)
    {
        *********nbr = 42;
    }
 }

 int main()
 {
    int value = 1337;
    int *p1 = &value;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;

    printf("Original =  %d\n",value);

    ft_ultimate_ft(&p8);

    printf("New Value = %d\n",value);



 }