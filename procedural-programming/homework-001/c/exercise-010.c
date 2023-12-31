/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from km/h to m/s
 * Date: 2023-12-31 - Time: 20:00
 */

#include <stdio.h>

int main() {

    float kmh, ms;

    printf("Enter a speed in km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("The speed in m/s is %f\n", ms);

    return 0;

}
