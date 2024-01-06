/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to acres
 * Date: 2024-01-06 - Time: 14:20
 */

#include <stdio.h>

int main() {

    float m2, acres;

    printf("Enter an area in square meters: ");
    scanf("%f", &m2);

    acres = m2 * 0.000247;

    printf("The area in acres is %f\n", acres);

    return 0;

}
