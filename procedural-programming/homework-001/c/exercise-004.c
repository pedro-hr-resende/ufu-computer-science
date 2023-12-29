/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the square of a number
 * Date: 2023-12-29 - Time: 00:00
 */

#include <stdio.h>

int main() {

    float number, answer;

    printf("Enter a number: ");
    scanf("%f", &number);

    answer = number * number;

    printf("The number squared is %f\n", answer);

    return 0;

}
