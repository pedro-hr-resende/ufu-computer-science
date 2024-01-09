/* Student: Pedro Henrique Resende Ribeiro
 * Description: Calculating the hypotenuse of a triangle
 * Date: 2024-01-09 - Time: 01:20
 */

#include <math.h>
#include <stdio.h>

int main() {

    float a, b, hypotenuse;

    printf("Enter the 1st side of the triangle: ");
    scanf("%f", &a);

    printf("Enter the 2nd side of the triangle: ");
    scanf("%f", &b);

    hypotenuse = sqrt(pow(a, 2.0) + pow(b, 2.0));

    printf("The hypotenuse is %f\n", hypotenuse);

    return 0;

}
