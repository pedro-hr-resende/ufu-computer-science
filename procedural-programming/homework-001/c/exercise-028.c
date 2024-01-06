/* Student: Pedro Henrique Resende Ribeiro
 * Description: Sum of squares of 3 numbers
 * Date: 2024-01-06 - Time: 15:00
 */

#include <math.h>
#include <stdio.h>

int main() {

    float number1, number2, number3, sum;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("Enter the 3rd number: ");
    scanf("%f", &number3);

    sum = pow(number1, 2.0) + pow(number2, 2.0) + pow(number3, 2.0);

    printf("The sum of squares is %f\n", sum);

    return 0;

}
