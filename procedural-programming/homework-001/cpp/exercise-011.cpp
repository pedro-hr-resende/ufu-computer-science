/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m/s to km/h
 * Date: 2023-12-31 - Time: 20:10
 */

#include <iostream>

using namespace std;

int main() {

    double kmh, ms;

    cout << "Enter a speed in m/s: ";
    cin >> ms;

    kmh = ms * 3.6;

    cout << "The speed in km/h is " << kmh << endl;

    return 0;

}   
