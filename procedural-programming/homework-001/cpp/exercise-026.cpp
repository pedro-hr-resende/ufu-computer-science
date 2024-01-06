/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to hectares
 * Date: 2024-01-06 - Time: 14:40
 */

#include <iostream>

using namespace std;

int main() {

    double m2, hectares;

    cout << "Enter an area in square meters: ";
    cin >> m2;

    hectares = m2 * 0.0001;

    cout << "The area in hectares is " << hectares << endl;

    return 0;

}
