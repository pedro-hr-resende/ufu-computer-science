/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kilometers to miles
 * Date: 2024-01-01 - Time: 15:00
 */

#include <stdio.h>

int main() {

    float miles, kilometers;

    printf("Enter a distance in kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers / 1.61;

    printf("The distance in miles is %f\n", miles);

    return 0;

}
