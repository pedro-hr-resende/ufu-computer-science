/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to hectares
 * Date: 2024-01-06 - Time: 14:40
 */

#include <stdio.h>

int main() {

    float m2, hectares;

    printf("Enter an area in square meters: ");
    scanf("%f", &m2);

    hectares = m2 * 0.0001;

    printf("The area in hectares is %f\n", hectares);

    return 0;

}
