/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from pounds to kilograms
 * Date: 2024-01-04 - Time: 22:50
 */

#include <stdio.h>

int main() {

    float kilograms, pounds;

    printf("Enter a mass in pounds: ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.45;

    printf("The mass in kilograms is %f\n", kilograms);

    return 0;

}
