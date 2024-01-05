/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from liters to m3
 * Date: 2024-01-04 - Time: 22:30
 */

#include <iostream>

using namespace std;

int main() {

    double m3, liters;

    cout << "Enter a volume in liters: ";
    cin >> liters;

    m3 = liters / 1000.0;

    cout << "The volume in cubic meters is " << m3 << endl;

    return 0;

}
