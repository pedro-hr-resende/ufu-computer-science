/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the volume of a cylinder
 * Date: 2024-01-09 - Time: 01:30
 */

#include <math.h>
#include <stdio.h>

#define PI 3.141592

int main() {

    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * pow(radius, 2.0) * height;

    printf("The volume is %f\n", volume);

    return 0;

}
