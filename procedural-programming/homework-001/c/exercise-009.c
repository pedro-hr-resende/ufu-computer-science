/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from celsius to kelvin
 * Date: 2023-12-30 - Time: 16:50
 */

#include <stdio.h>

int main() {

    float kelvin, celsius;

    printf("Enter a temperature in celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("The temperature in kelvin is %f\n", kelvin);

    return 0;

}
