/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from dollar to real
 * Date: 2024-01-06 - Time: 15:20
 */

#include <stdio.h>

int main() {

    float real, dollar, rate;

    printf("Enter a value in real: ");
    scanf("%f", &real);

    printf("Enter the exchange rate: ");
    scanf("%f", &rate);

    dollar = real * rate;

    printf("The value in dollar is %f\n", dollar);

    return 0;

}
