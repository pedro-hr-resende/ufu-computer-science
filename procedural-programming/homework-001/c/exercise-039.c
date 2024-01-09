/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the amount won by each winner
 * Date: 2024-01-09 - Time: 02:00
 */

#include <stdio.h>

int main() {

    float prize, value1, value2, value3;

    prize = 780000.0;

    value1 = prize * 0.46;
    value2 = prize * 0.32;
    value3 = prize * 0.22;

    printf("Winner 1: %.2f\n", value1);
    printf("Winner 2: %.2f\n", value2);
    printf("Winner 3: %.2f\n", value3);

    return 0;

}
