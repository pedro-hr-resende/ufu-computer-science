/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the fifth part of a number
 * Date: 2023-12-29 - Time: 00:10
 */

#include <stdio.h>

int main() {

    float number, answer;

    printf("Enter a number: ");
    scanf("%f", &number);

    answer = number / 5.0;

    printf("The fifth part is %f\n", answer);

    return 0;

}
