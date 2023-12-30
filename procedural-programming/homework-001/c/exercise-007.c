/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from fahrenheit to celsius
 * Date: 2023-12-30 - Time: 16:30
 */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("The temperature in celsius is %f\n", celsius);

    return 0;

}
