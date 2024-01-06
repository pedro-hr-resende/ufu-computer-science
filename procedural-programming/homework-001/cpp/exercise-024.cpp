/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to acres
 * Date: 2024-01-06 - Time: 14:20
 */

#include <iostream>

using namespace std;

int main() {

    double m2, acres;

    cout << "Enter an area in square meters: ";
    cin >> m2;

    acres = m2 * 0.000247;

    cout << "The area in acres is " << acres << endl;

    return 0;

}
