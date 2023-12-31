/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from miles to kilometers
 * Date: 2023-12-31 - Time: 20:20
 */

#include <stdio.h>

int main() {

    float miles, kilometers;

    printf("Enter a distance in miles: ");
    scanf("%f", &miles);

    kilometers = miles * 1.61;

    printf("The distance in kilometers is %f\n", kilometers);

    return 0;

}
