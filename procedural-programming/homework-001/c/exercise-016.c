/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from inches to centimeters
 * Date: 2024-01-04 - Time: 22:00
 */

#include <stdio.h>

int main() {

    float inches, centimeters;

    printf("Enter a length in inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;

    printf("The length in centimeters is %f\n", centimeters);

    return 0;

}
