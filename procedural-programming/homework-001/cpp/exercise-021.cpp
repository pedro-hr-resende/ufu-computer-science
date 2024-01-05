/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from pounds to kilograms
 * Date: 2024-01-04 - Time: 22:50
 */

#include <iostream>

using namespace std;

int main() {

    double kilograms, pounds;

    cout << "Enter a mass in pounds: ";
    cin >> pounds;

    kilograms = pounds * 0.45;

    cout << "The mass in kilograms is " << kilograms << endl;

    return 0;

}
