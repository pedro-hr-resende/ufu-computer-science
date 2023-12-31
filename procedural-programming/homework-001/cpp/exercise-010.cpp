/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from km/h to m/s
 * Date: 2023-12-31 - Time: 20:00
 */

#include <iostream>

using namespace std;

int main() {

    double kmh, ms;

    cout << "Enter a speed in km/h: ";
    cin >> kmh;

    ms = kmh / 3.6;

    cout << "The speed in m/s is " << ms << endl;

    return 0;

}
