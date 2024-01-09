/* Student: Pedro Henrique Resende Ribeiro
 * Description: Predecessor and successor of a number
 * Date: 2024-01-09 - Time: 00:40
 */

#include <stdio.h>

int main() {

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Predecessor: %d\n", number - 1);
    printf("Successor: %d\n", number + 1);

    return 0;

}
