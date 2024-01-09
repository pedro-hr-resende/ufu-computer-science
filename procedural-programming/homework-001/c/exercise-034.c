/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the area of a circle
 * Date: 2024-01-09 - Time: 01:10
 */

#include <math.h>
#include <stdio.h>

#define PI 3.141592

int main() {

    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * pow(radius, 2.0);

    printf("The area is %f\n", area);

    return 0;

}
