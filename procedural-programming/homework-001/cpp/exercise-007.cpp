/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from fahrenheit to celsius
 * Date: 2023-12-30 - Time: 16:30
 */

#include <iostream>

using namespace std;

int main() {

    double celsius, fahrenheit;

    cout << "Enter a temperature in fahrenheit: ";
    cin >> fahrenheit;

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    cout << "The temperature in celsius is " << celsius << endl;

    return 0;

}
