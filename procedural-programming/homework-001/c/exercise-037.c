/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the price of a discounted product
 * Date: 2024-01-09 - Time: 01:40
 */

#include <stdio.h>

int main() {

    float price, discount, newPrice;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    discount = 0.12;
    newPrice = price * (1 - discount);

    printf("The new price is %.2f\n", newPrice);

    return 0;

}
