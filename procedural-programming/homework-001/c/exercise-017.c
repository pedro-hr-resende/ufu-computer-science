/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from centimeters to inches
 * Date: 2024-01-04 - Time: 22:10
 */

#include <stdio.h>

int main() {

    float inches, centimeters;

    printf("Enter a length in centimeters: ");
    scanf("%f", &centimeters);

    inches = centimeters / 2.54;

    printf("The length in inches is %f\n", inches);

    return 0;

}
