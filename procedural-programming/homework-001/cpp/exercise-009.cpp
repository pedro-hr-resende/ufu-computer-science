/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from celsius to kelvin
 * Date: 2023-12-30 - Time: 16:50
 */

#include <iostream>

using namespace std;

int main() {

    double kelvin, celsius;

    cout << "Enter a temperature in celsius: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "The temperature in kelvin is " << kelvin << endl;

    return 0;

}
