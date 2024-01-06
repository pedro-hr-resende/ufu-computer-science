/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from meters to yards
 * Date: 2024-01-06 - Time: 14:10
 */

#include <stdio.h>

int main() {

    float yards, meters;

    printf("Enter a length in meters: ");
    scanf("%f", &meters);

    yards = meters / 0.91;

    printf("The length in yards is %f\n", yards);

    return 0;

}
