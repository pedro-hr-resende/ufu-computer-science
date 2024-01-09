/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the area of a square
 * Date: 2024-01-09 - Time: 01:00
 */

#include <math.h>
#include <stdio.h>

int main() {

    float side, area;

    printf("Enter the side size of the square: ");
    scanf("%f", &side);

    area = pow(side, 2.0);

    printf("The area is %f\n", area);

    return 0;

}
