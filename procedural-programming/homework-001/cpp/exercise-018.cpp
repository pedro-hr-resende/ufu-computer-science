/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m3 to liters
 * Date: 2024-01-04 - Time: 22:20
 */

#include <iostream>

using namespace std;

int main() {

    double m3, liters;

    cout << "Enter a volume in cubic meters: ";
    cin >> m3;

    liters = m3 * 1000.0;

    cout << "The volume in liters is " << liters << endl;

    return 0;

}
