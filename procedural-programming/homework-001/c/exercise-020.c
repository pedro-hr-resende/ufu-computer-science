/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kilograms to pounds
 * Date: 2024-01-04 - Time: 22:40
 */

#include <stdio.h>

int main() {

    float kilograms, pounds;

    printf("Enter a mass in kilograms: ");
    scanf("%f", &kilograms);

    pounds = kilograms / 0.45;

    printf("The mass in pounds is %f\n", pounds);

    return 0;

}
