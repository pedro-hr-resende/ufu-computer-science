/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the price of a discounted product
 * Date: 2024-01-09 - Time: 01:40
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    double price, discount, newPrice;

    cout << "Enter the price of the product: ";
    cin >> price;

    discount = 0.12;
    newPrice = price * (1 - discount);

    cout << fixed << setprecision(2);
    cout << "The new price is " << newPrice << endl;

    return 0;

}
