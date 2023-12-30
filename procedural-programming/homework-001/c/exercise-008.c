/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kelvin to celsius
 * Date: 2023-12-30 - Time: 16:40
 */

#include <stdio.h>

int main() {

    float kelvin, celsius;

    printf("Enter a temperature in kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("The temperature in celsius is %f\n", celsius);

    return 0;

}
