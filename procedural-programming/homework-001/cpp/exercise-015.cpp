/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from radians to degrees
 * Date: 2024-01-01 - Time: 15:20
 */

#include <iostream>

#define PI 3.14

using namespace std;

int main() {

    double degrees, radians;

    cout << "Enter an angle in radians: ";
    cin >> radians;

    degrees = radians * 180.0 / PI;

    cout << "The angle in degrees is " << degrees << endl;

    return 0;

}
