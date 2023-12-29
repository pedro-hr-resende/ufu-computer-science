/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from celsius to fahrenheit
 * Date: 2023-12-29 - Time: 00:20
 */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("Enter a temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("The temperature in fahrenheit is %f\n", fahrenheit);

    return 0;

}
