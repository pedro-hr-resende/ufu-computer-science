/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from hectares to m2
 * Date: 2024-01-06 - Time: 14:50
 */

#include <stdio.h>

int main() {

    float m2, hectares;

    printf("Enter an area in hectares: ");
    scanf("%f", &hectares);

    m2 = hectares * 10000.0;

    printf("The area in square meters is %f\n", m2);

    return 0;

}
