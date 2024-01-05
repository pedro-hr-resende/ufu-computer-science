/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m3 to liters
 * Date: 2024-01-04 - Time: 22:20
 */

#include <stdio.h>

int main() {

    float m3, liters;

    printf("Enter a volume in cubic meters: ");
    scanf("%f", &m3);

    liters = m3 * 1000;

    printf("The volume in liters is %f\n", liters);

    return 0;

}
