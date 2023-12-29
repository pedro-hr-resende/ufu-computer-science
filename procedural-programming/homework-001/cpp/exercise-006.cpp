/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from celsius to fahrenheit
 * Date: 2023-12-29 - Time: 00:20
 */

#include <iostream>

using namespace std;

int main() {

    double celsius, fahrenheit;

    cout << "Enter a temperature in celsius: ";
    cin >> celsius;

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    cout << "The temperature in fahrenheit is " << fahrenheit << endl;

    return 0;

}
