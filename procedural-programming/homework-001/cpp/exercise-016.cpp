/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from inches to centimeters
 * Date: 2024-01-04 - Time: 22:00
 */

#include <iostream>

using namespace std;

int main() {

    double inches, centimeters;

    cout << "Enter a length in inches: ";
    cin >> inches;

    centimeters = inches * 2.54;

    cout << "The length in centimeters is " << centimeters << endl;

    return 0;

}
