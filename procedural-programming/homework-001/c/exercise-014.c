/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from degrees to radians
 * Date: 2024-01-01 - Time: 15:10
 */

#include <stdio.h>

#define PI 3.14

int main() {

    float degrees, radians;

    printf("Enter an angle in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * PI / 180.0;

    printf("The angle in radians is %f\n", radians);

    return 0;

}
