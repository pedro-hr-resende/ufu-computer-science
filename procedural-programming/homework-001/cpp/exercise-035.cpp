/* Student: Pedro Henrique Resende Ribeiro
 * Description: Calculating the hypotenuse of a triangle
 * Date: 2024-01-09 - Time: 01:20
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    double a, b, hypotenuse;

    cout << "Enter the 1st side of the triangle: ";
    cin >> a;

    cout << "Enter the 2nd side of the triangle: ";
    cin >> b;

    hypotenuse = sqrt(pow(a, 2.0) + pow(b, 2.0));

    cout << "The hypotenuse is " << hypotenuse << endl;

    return 0;

}
