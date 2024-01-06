/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from yards to meters
 * Date: 2024-01-06 - Time: 14:00
 */

#include <stdio.h>

int main() {

    float yards, meters;

    printf("Enter a length in yards: ");
    scanf("%f", &yards);

    meters = yards * 0.91;

    printf("The length in meters is %f\n", meters);

    return 0;

}
