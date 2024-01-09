/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print an employee's new salary
 * Date: 2024-01-09 - Time: 01:50
 */

#include <stdio.h>

int main() {

    float salary, increase, newSalary;

    printf("Enter the employee's salary: ");
    scanf("%f", &salary);

    increase = 0.25;
    newSalary = salary * (1 + increase);

    printf("The new salary is %.2f\n", newSalary);

    return 0;

}
