/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from degrees to radians
 * Date: 2024-01-01 - Time: 15:10
 */

#include <iostream>

#define PI 3.14

using namespace std;

int main() {

    double degrees, radians;

    cout << "Enter an angle in degrees: ";
    cin >> degrees;

    radians = degrees * PI / 180.0;

    cout << "The angle in radians is " << radians << endl;

    return 0;

}
