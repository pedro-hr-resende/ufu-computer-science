/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from radians to degrees
 * Date: 2024-01-01 - Time: 15:20
 */

#include <stdio.h>

#define PI 3.14

int main() {

    float degrees, radians;

    printf("Enter an angle in radians: ");
    scanf("%f", &radians);

    degrees = radians * 180.0 / PI;

    printf("The angle in degrees is %f\n", degrees);

    return 0;

}
