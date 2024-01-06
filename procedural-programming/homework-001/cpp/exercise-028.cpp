/* Student: Pedro Henrique Resende Ribeiro
 * Description: Sum of squares of 3 numbers
 * Date: 2024-01-06 - Time: 15:00
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    double number1, number2, number3, sum;

    cout << "Enter the 1st number: ";
    cin >> number1;

    cout << "Enter the 2nd number: ";
    cin >> number2;

    cout << "Enter the 3rd number: ";
    cin >> number3;

    sum = pow(number1, 2.0) + pow(number2, 2.0) + pow(number3, 2.0);

    cout << "The sum of squares is " << sum << endl;

    return 0;

}
