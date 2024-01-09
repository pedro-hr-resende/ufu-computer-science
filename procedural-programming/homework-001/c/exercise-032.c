/* Student: Pedro Henrique Resende Ribeiro
 * Descriptiion: Sum of successor and predecessor
 * Date: 2024-01-09 - Time: 00:50
 */

#include <stdio.h>

int main() {

    int number, predecessor, successor;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    predecessor = (number * 2) - 1;
    successor = (number * 3) + 1;

    printf("The sum is %d\n", predecessor + successor);

    return 0;

}
