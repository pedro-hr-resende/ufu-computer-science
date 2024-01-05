/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kilograms to pounds
 * Date: 2024-01-04 - Time: 22:40
 */

#include <iostream>

using namespace std;

int main() {

    double kilograms, pounds;

    cout << "Enter a mass in kilograms: ";
    cin >> kilograms;

    pounds = kilograms / 0.45;

    cout << "The mass in pounds is " << pounds << endl;

    return 0;

}
