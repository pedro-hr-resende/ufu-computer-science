/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from centimeters to inches;
 * Date: 2024-01-04 - Time: 22:10
 */

#include <iostream>

using namespace std;

int main() {

    double inches, centimeters;

    cout << "Enter a length in centimeters: ";
    cin >> centimeters;

    inches = centimeters / 2.54;

    cout << "The length in inches is " << inches << endl;

    return 0;

}
