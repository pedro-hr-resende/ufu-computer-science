/* Student: Pedro Henrique Resende Ribeiro
 * Description: Sum of three numbers
 * Date: 2023-12-28 - Time: 02:20
 */

#include <stdio.h>

int main() {

    float number1, number2, number3, sum;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("Enter the 3rd number: ");
    scanf("%f", &number3);

    sum = number1 + number2 + number3;

    printf("The sum is %f\n", sum);

    return 0;

}
