/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from acres to m2
 * Date: 2024-01-06 - Time: 14:30
 */

#include <stdio.h>

int main() {

    float m2, acres;

    printf("Enter an area in acres: ");
    scanf("%f", &acres);

    m2 = acres * 4048.58;

    printf("The area in square meters is %f\n", m2);

    return 0;

}
