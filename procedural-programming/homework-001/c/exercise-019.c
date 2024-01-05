/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from liters to m3
 * Date: 2024-01-04 - Time: 22:30
 */

#include <stdio.h>

int main() {

    float m3, liters;

    printf("Enter a volume in liters: ");
    scanf("%f", &liters);

    m3 = liters / 1000.0;

    printf("The volume in cubic meters is %f\n", m3);

    return 0;

}
