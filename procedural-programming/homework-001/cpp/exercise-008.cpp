/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kelvin to celsius
 * Date: 2023-12-30 - Time: 16:40
 */

#include <iostream>

using namespace std;

int main() {

    double kelvin, celsius;

    cout << "Enter a temperature in kelvin: ";
    cin >> kelvin;

    celsius = kelvin - 273.15;

    cout << "The temperature in celsius is " << celsius << endl;

    return 0;

}
