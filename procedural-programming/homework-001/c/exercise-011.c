/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m/s to km/h
 * Date: 2023-12-31 - Time: 20:10
 */

#include <stdio.h>

int main() {

    float kmh, ms;

    printf("Enter a speed in m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("The speed in km/h is %f\n", kmh);

    return 0;

}
